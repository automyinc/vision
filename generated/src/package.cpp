
// AUTO GENERATED by vnxcppcodegen

#include <vnx/Topic.h>

#include <automy/vision/CameraInfo.hxx>
#include <automy/vision/ImageFrame.hxx>
#include <automy/vision/ImageFrame16.hxx>
#include <automy/vision/ImageFrame8.hxx>
#include <automy/vision/ImageFrameF16.hxx>
#include <automy/vision/ImageFrameF32.hxx>
#include <automy/vision/MultiImageFrame.hxx>
#include <automy/vision/PointCloud.hxx>
#include <automy/vision/StereoInfo.hxx>
#include <automy/vision/image_format_e.hxx>
#include <automy/vision/point_t.hxx>
#include <automy/vision/surface_t.hxx>



namespace automy {
namespace vision {


static void register_all_types() {
	vnx::register_type_code(automy::vision::CameraInfo::create_type_code());
	vnx::register_type_code(automy::vision::ImageFrame::create_type_code());
	vnx::register_type_code(automy::vision::ImageFrame16::create_type_code());
	vnx::register_type_code(automy::vision::ImageFrame8::create_type_code());
	vnx::register_type_code(automy::vision::ImageFrameF16::create_type_code());
	vnx::register_type_code(automy::vision::ImageFrameF32::create_type_code());
	vnx::register_type_code(automy::vision::MultiImageFrame::create_type_code());
	vnx::register_type_code(automy::vision::PointCloud::create_type_code());
	vnx::register_type_code(automy::vision::StereoInfo::create_type_code());
	vnx::register_type_code(automy::vision::image_format_e::create_type_code());
	vnx::register_type_code(automy::vision::point_t::create_type_code());
	vnx::register_type_code(automy::vision::surface_t::create_type_code());
}

static struct vnx_static_init {
	vnx_static_init() {
		register_all_types();
	}
} vnx_static_init_;

} // namespace automy
} // namespace vision
