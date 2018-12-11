
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vision_image_format_e_HXX_
#define INCLUDE_vision_image_format_e_HXX_

#include <vnx/Type.h>
#include <vision/package.hxx>


namespace vision {

struct image_format_e {
	
	enum {
		BAYER_BG = 1019334836,
		BAYER_GB = 1081408084,
		BAYER_GR = 289905693,
		BAYER_RG = 334137210,
		BGR = 3118165023,
		CUSTOM = 2218374445,
		HEIGHT_MAP = 2319470177,
		OPTICAL_FLOW = 3019150944,
		RGB = 2689788908,
		RGBA = 672142168,
		XYZE = 2978415047,
		YUV420 = 2598799393,
		YUV420_NV12 = 3701683859,
		YUV422 = 849750138,
		ZE = 2064883057,
	};
	
	::uint32_t value = 0;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	image_format_e() {}
	image_format_e(uint32_t _value) { value = _value; }
	
	vnx::Hash64 get_type_hash() const;
	const char* get_type_name() const;
	
	operator uint32_t() const { return value; }
	image_format_e& operator=(uint32_t _value) { value = _value; return *this; }
	
	static std::shared_ptr<image_format_e> create();
	std::shared_ptr<image_format_e> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	friend std::ostream& operator<<(std::ostream& _out, const image_format_e& _value);
	friend std::istream& operator>>(std::istream& _in, image_format_e& _value);
	
	static const vnx::TypeCode* get_type_code();
	static std::shared_ptr<vnx::TypeCode> create_type_code();
	
};


} // namespace vision

#endif // INCLUDE_vision_image_format_e_HXX_
