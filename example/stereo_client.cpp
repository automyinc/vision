/*
 * stereo_client.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: Max Wittal
 */

#include <vision/ImageFrame8.hxx>
#include <vision/ImageFrameF16.hxx>

#include <vnx/Config.h>
#include <vnx/Process.h>
#include <vnx/Terminal.h>
#include <vnx/Proxy.h>
#include <vnx/Thread.h>
#include <vnx/Sample.hxx>


/*
 * Define input topics.
 */
std::string topic_rgba_input = "vision.rectified_frames.Basler_L";			// RGBA 8-bit images
std::string topic_stereo_input = "vision.stereo_ze_frames.long_range";		// ZE (depth, error) 16-bit float images


class ProcessThread : public vnx::Thread {
public:
	ProcessThread(const std::string& vnx_name_) : Thread(vnx_name_) {}
	
	void main() {
		
		/*
		 * Subscribe to the topics that we need.
		 */
		subscribe(topic_rgba_input, 10);		// we use a maximum queue length of 10 ms (instead of default 100 ms)
		subscribe(topic_stereo_input, 10);		// such that we never have more than one frame in the queue
		
		/*
		 * Enter main processing loop, continue until shutdown has been triggered.
		 */
		while(vnx_do_run) {
			
			/*
			 * Wait for next Message to be received.
			 */
			std::shared_ptr<const vnx::Message> msg = read_blocking();
			if(!msg) {
				break;		// shutdown has been triggered
			}
			
			/*
			 * See if we got a Sample.
			 */
			std::shared_ptr<const vnx::Sample> sample = std::dynamic_pointer_cast<const vnx::Sample>(msg);
			if(sample) {
				if(sample->topic->get_name() == topic_rgba_input) {
					rgba_frame = std::dynamic_pointer_cast<const vision::ImageFrame8>(sample->value);
				}
				if(sample->topic->get_name() == topic_stereo_input) {
					stereo_frame = std::dynamic_pointer_cast<const vision::ImageFrameF16>(sample->value);
				}
			}
			
			/*
			 * See if we have two matching frames and if yes process them.
			 */
			if(rgba_frame && stereo_frame && rgba_frame->time == stereo_frame->time) {
				
				process();
				
				// clear data so we don't process it multiple times
				rgba_frame = 0;
				stereo_frame = 0;
			}
		}
	}
	
	void process() {
		// ----------------------------------------------------------------------------------------------
		// Your processing code here.
		// ----------------------------------------------------------------------------------------------
	}
	
private:
	std::shared_ptr<const vision::ImageFrame8> rgba_frame;
	std::shared_ptr<const vision::ImageFrameF16> stereo_frame;
	
};


int main(int argc, char** argv) {
	
	std::map<std::string, std::string> options;
	options["s"] = "source";						// where to connect to
	options["source"] = "source url";
	
	vnx::init("stereo_client", argc, argv, options);
	
	/*
	 * By default we create a local UNIX proxy to vnxplayer.
	 * 
	 * During real-time operation we would use a UNIX proxy to the "stereo_main" process.
	 */
	std::string source = "/tmp/vnxplayer.sock";
	vnx::read_config("source", source);
	
	{
		/*
		 * Start a Terminal to display log messages for us.
		 * 
		 * Press "Enter" during runtime to access interactive command promt.
		 */
		vnx::Handle<vnx::Terminal> module = new vnx::Terminal("Terminal");
		module.start_detached();
	}
	
	/*
	 * The Proxy will connect to our "source", depending on the type of Endpoint
	 * either through TCP or a UNIX domain socket.
	 */
	vnx::Handle<vnx::Proxy> proxy = new vnx::Proxy("Proxy", vnx::Endpoint::from_url(source));
	
	/*
	 * Configure topics to import from source.
	 */
	proxy->import_list.push_back(topic_rgba_input);
	proxy->import_list.push_back(topic_stereo_input);
	
	/*
	 * Start the Proxy after all topics have been configured.
	 */
	proxy.start_detached();
	
	/*
	 * Start our processing thread.
	 */
	ProcessThread thread("ProcessThread");
	thread.start();
	
	/*
	 * Wait for shutdown.
	 */
	vnx::wait();
	
}

