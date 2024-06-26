
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_automy_vision_image_format_e_HXX_
#define INCLUDE_automy_vision_image_format_e_HXX_

#include <vnx/Type.h>
#include <automy/vision/package.hxx>


namespace automy {
namespace vision {

struct AUTOMY_VISION_EXPORT image_format_e {
	
	enum enum_t : uint32_t {
		BAYER_BG = 1019334836l,
		BAYER_GB = 1081408084l,
		BAYER_GR = 289905693l,
		BAYER_RG = 334137210l,
		BGR = 3118165023l,
		CUSTOM = 2218374445l,
		HEIGHT_MAP = 2319470177l,
		OPTICAL_FLOW = 3019150944l,
		RGB = 2689788908l,
		RGBA = 672142168l,
		XYZE = 2978415047l,
		YUV420 = 2598799393l,
		YUV420_NV12 = 3701683859l,
		YUV422 = 849750138l,
		ZE = 2064883057l,
	};
	
	::automy::vision::image_format_e::enum_t value = ::automy::vision::image_format_e::enum_t(0);
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xa4dcf5950509a49dull;
	
	image_format_e() {}
	
	image_format_e(const enum_t& _value) { value = _value; }
	image_format_e(const ::automy::vision::image_format_e& _other) { value = _other.value; }
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	operator enum_t() const { return value; }
	image_format_e& operator=(const enum_t& _value) { value = _value; return *this; }
	image_format_e& operator=(const ::automy::vision::image_format_e& _other) { value = _other.value; return *this; }
	
	static std::shared_ptr<image_format_e> create();
	std::shared_ptr<image_format_e> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::bool_t is_valid() const;
	std::string to_string() const;
	std::string to_string_value() const;
	std::string to_string_value_full() const;
	
	void from_string(const std::string& str);
	void from_string_value(const std::string& name);
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const image_format_e& _value);
	friend std::istream& operator>>(std::istream& _in, image_format_e& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void image_format_e::accept_generic(T& _visitor) const {
	_visitor.template type_begin<image_format_e>(1);
	_visitor.type_field("value", 0); _visitor.accept(value);
	_visitor.template type_end<image_format_e>(1);
}


} // namespace automy
} // namespace vision


namespace vnx {

void read(TypeInput& in, ::automy::vision::image_format_e::enum_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::automy::vision::image_format_e::enum_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

template<>
std::string to_string(const ::automy::vision::image_format_e& _value); ///< \private

template<>
std::string to_string_value(const ::automy::vision::image_format_e& _value); ///< \private

template<>
std::string to_string_value_full(const ::automy::vision::image_format_e& _value); ///< \private

template<>
std::string to_string(const ::automy::vision::image_format_e::enum_t& _value); ///< \private

template<>
std::string to_string_value(const ::automy::vision::image_format_e::enum_t& _value); ///< \private

template<>
std::string to_string_value_full(const ::automy::vision::image_format_e::enum_t& _value); ///< \private

template<>
struct is_equivalent<::automy::vision::image_format_e> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_automy_vision_image_format_e_HXX_
