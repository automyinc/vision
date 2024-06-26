
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_automy_vision_ImageFrame8_HXX_
#define INCLUDE_automy_vision_ImageFrame8_HXX_

#include <automy/vision/package.hxx>
#include <automy/basic/Image8.hpp>
#include <automy/vision/ImageFrame.hxx>


namespace automy {
namespace vision {

class AUTOMY_VISION_EXPORT ImageFrame8 : public ::automy::vision::ImageFrame {
public:
	
	::automy::basic::Image8 image;
	
	typedef ::automy::vision::ImageFrame Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xdedd031b29089a86ull;
	
	ImageFrame8() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<ImageFrame8> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const ImageFrame8& _value);
	friend std::istream& operator>>(std::istream& _in, ImageFrame8& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method) override;
	
};

template<typename T>
void ImageFrame8::accept_generic(T& _visitor) const {
	_visitor.template type_begin<ImageFrame8>(8);
	_visitor.type_field("time", 0); _visitor.accept(time);
	_visitor.type_field("time_end", 1); _visitor.accept(time_end);
	_visitor.type_field("format", 2); _visitor.accept(format);
	_visitor.type_field("frame", 3); _visitor.accept(frame);
	_visitor.type_field("layer", 4); _visitor.accept(layer);
	_visitor.type_field("intensity", 5); _visitor.accept(intensity);
	_visitor.type_field("properties", 6); _visitor.accept(properties);
	_visitor.type_field("image", 7); _visitor.accept(image);
	_visitor.template type_end<ImageFrame8>(8);
}


} // namespace automy
} // namespace vision


namespace vnx {

} // vnx

#endif // INCLUDE_automy_vision_ImageFrame8_HXX_
