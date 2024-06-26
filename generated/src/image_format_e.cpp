
// AUTO GENERATED by vnxcppcodegen

#include <automy/vision/package.hxx>
#include <automy/vision/image_format_e.hxx>

#include <vnx/vnx.h>


namespace automy {
namespace vision {


const vnx::Hash64 image_format_e::VNX_TYPE_HASH(0xa4dcf5950509a49dull);
const vnx::Hash64 image_format_e::VNX_CODE_HASH(0xd5063d0326eb6b6ull);

vnx::Hash64 image_format_e::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string image_format_e::get_type_name() const {
	return "automy.vision.image_format_e";
}

const vnx::TypeCode* image_format_e::get_type_code() const {
	return automy::vision::vnx_native_type_code_image_format_e;
}

std::shared_ptr<image_format_e> image_format_e::create() {
	return std::make_shared<image_format_e>();
}

std::shared_ptr<image_format_e> image_format_e::clone() const {
	return std::make_shared<image_format_e>(*this);
}

void image_format_e::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void image_format_e::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

vnx::bool_t image_format_e::is_valid() const {
	switch(value) {
		case BAYER_BG: return true;
		case BAYER_GB: return true;
		case BAYER_GR: return true;
		case BAYER_RG: return true;
		case BGR: return true;
		case CUSTOM: return true;
		case HEIGHT_MAP: return true;
		case OPTICAL_FLOW: return true;
		case RGB: return true;
		case RGBA: return true;
		case XYZE: return true;
		case YUV420: return true;
		case YUV420_NV12: return true;
		case YUV422: return true;
		case ZE: return true;
	}
	return false;
}

std::string image_format_e::to_string() const {
	switch(value) {
		case BAYER_BG: return "\"BAYER_BG\"";
		case BAYER_GB: return "\"BAYER_GB\"";
		case BAYER_GR: return "\"BAYER_GR\"";
		case BAYER_RG: return "\"BAYER_RG\"";
		case BGR: return "\"BGR\"";
		case CUSTOM: return "\"CUSTOM\"";
		case HEIGHT_MAP: return "\"HEIGHT_MAP\"";
		case OPTICAL_FLOW: return "\"OPTICAL_FLOW\"";
		case RGB: return "\"RGB\"";
		case RGBA: return "\"RGBA\"";
		case XYZE: return "\"XYZE\"";
		case YUV420: return "\"YUV420\"";
		case YUV420_NV12: return "\"YUV420_NV12\"";
		case YUV422: return "\"YUV422\"";
		case ZE: return "\"ZE\"";
	}
	return std::to_string(value);
}

std::string image_format_e::to_string_value() const {
	switch(value) {
		case BAYER_BG: return "BAYER_BG";
		case BAYER_GB: return "BAYER_GB";
		case BAYER_GR: return "BAYER_GR";
		case BAYER_RG: return "BAYER_RG";
		case BGR: return "BGR";
		case CUSTOM: return "CUSTOM";
		case HEIGHT_MAP: return "HEIGHT_MAP";
		case OPTICAL_FLOW: return "OPTICAL_FLOW";
		case RGB: return "RGB";
		case RGBA: return "RGBA";
		case XYZE: return "XYZE";
		case YUV420: return "YUV420";
		case YUV420_NV12: return "YUV420_NV12";
		case YUV422: return "YUV422";
		case ZE: return "ZE";
	}
	return std::to_string(value);
}

std::string image_format_e::to_string_value_full() const {
	switch(value) {
		case BAYER_BG: return "automy.vision.image_format_e.BAYER_BG";
		case BAYER_GB: return "automy.vision.image_format_e.BAYER_GB";
		case BAYER_GR: return "automy.vision.image_format_e.BAYER_GR";
		case BAYER_RG: return "automy.vision.image_format_e.BAYER_RG";
		case BGR: return "automy.vision.image_format_e.BGR";
		case CUSTOM: return "automy.vision.image_format_e.CUSTOM";
		case HEIGHT_MAP: return "automy.vision.image_format_e.HEIGHT_MAP";
		case OPTICAL_FLOW: return "automy.vision.image_format_e.OPTICAL_FLOW";
		case RGB: return "automy.vision.image_format_e.RGB";
		case RGBA: return "automy.vision.image_format_e.RGBA";
		case XYZE: return "automy.vision.image_format_e.XYZE";
		case YUV420: return "automy.vision.image_format_e.YUV420";
		case YUV420_NV12: return "automy.vision.image_format_e.YUV420_NV12";
		case YUV422: return "automy.vision.image_format_e.YUV422";
		case ZE: return "automy.vision.image_format_e.ZE";
	}
	return std::to_string(value);
}

void image_format_e::from_string(const std::string& _str) {
	std::string _name;
	vnx::from_string(_str, _name);
	from_string_value(_name);
}

void image_format_e::from_string_value(const std::string& _name) {
	vnx::Variant var;
	vnx::from_string_value(_name, var);
	if(var.is_string()) {
		if(_name == "BAYER_BG") value = BAYER_BG;
		else if(_name == "BAYER_GB") value = BAYER_GB;
		else if(_name == "BAYER_GR") value = BAYER_GR;
		else if(_name == "BAYER_RG") value = BAYER_RG;
		else if(_name == "BGR") value = BGR;
		else if(_name == "CUSTOM") value = CUSTOM;
		else if(_name == "HEIGHT_MAP") value = HEIGHT_MAP;
		else if(_name == "OPTICAL_FLOW") value = OPTICAL_FLOW;
		else if(_name == "RGB") value = RGB;
		else if(_name == "RGBA") value = RGBA;
		else if(_name == "XYZE") value = XYZE;
		else if(_name == "YUV420") value = YUV420;
		else if(_name == "YUV420_NV12") value = YUV420_NV12;
		else if(_name == "YUV422") value = YUV422;
		else if(_name == "ZE") value = ZE;
		else value = enum_t(vnx::hash64(_name));
	} else {
		value = enum_t(std::stoul(_name.c_str(), nullptr, 0));
	}
}

void image_format_e::accept(vnx::Visitor& _visitor) const {
	std::string _name;
	switch(value) {
		case BAYER_BG: _name = "BAYER_BG"; break;
		case BAYER_GB: _name = "BAYER_GB"; break;
		case BAYER_GR: _name = "BAYER_GR"; break;
		case BAYER_RG: _name = "BAYER_RG"; break;
		case BGR: _name = "BGR"; break;
		case CUSTOM: _name = "CUSTOM"; break;
		case HEIGHT_MAP: _name = "HEIGHT_MAP"; break;
		case OPTICAL_FLOW: _name = "OPTICAL_FLOW"; break;
		case RGB: _name = "RGB"; break;
		case RGBA: _name = "RGBA"; break;
		case XYZE: _name = "XYZE"; break;
		case YUV420: _name = "YUV420"; break;
		case YUV420_NV12: _name = "YUV420_NV12"; break;
		case YUV422: _name = "YUV422"; break;
		case ZE: _name = "ZE"; break;
	}
	_visitor.enum_value(value, _name);
}

void image_format_e::write(std::ostream& _out) const {
	switch(value) {
		case BAYER_BG: _out << "\"BAYER_BG\""; break;
		case BAYER_GB: _out << "\"BAYER_GB\""; break;
		case BAYER_GR: _out << "\"BAYER_GR\""; break;
		case BAYER_RG: _out << "\"BAYER_RG\""; break;
		case BGR: _out << "\"BGR\""; break;
		case CUSTOM: _out << "\"CUSTOM\""; break;
		case HEIGHT_MAP: _out << "\"HEIGHT_MAP\""; break;
		case OPTICAL_FLOW: _out << "\"OPTICAL_FLOW\""; break;
		case RGB: _out << "\"RGB\""; break;
		case RGBA: _out << "\"RGBA\""; break;
		case XYZE: _out << "\"XYZE\""; break;
		case YUV420: _out << "\"YUV420\""; break;
		case YUV420_NV12: _out << "\"YUV420_NV12\""; break;
		case YUV422: _out << "\"YUV422\""; break;
		case ZE: _out << "\"ZE\""; break;
		default: _out << value;
	}
}

void image_format_e::read(std::istream& _in) {
	from_string_value(vnx::read(_in).to_string_value());
}

vnx::Object image_format_e::to_object() const {
	vnx::Object _object;
	_object["__type"] = "automy.vision.image_format_e";
	_object["value"] = value;
	return _object;
}

void image_format_e::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "value") {
			_entry.second.to(value);
		}
	}
}

vnx::Variant image_format_e::get_field(const std::string& _name) const {
	if(_name == "value") {
		return vnx::Variant(value);
	}
	return vnx::Variant();
}

void image_format_e::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "value") {
		_value.to(value);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const image_format_e& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, image_format_e& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* image_format_e::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> image_format_e::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "automy.vision.image_format_e";
	type_code->type_hash = vnx::Hash64(0xa4dcf5950509a49dull);
	type_code->code_hash = vnx::Hash64(0xd5063d0326eb6b6ull);
	type_code->is_native = true;
	type_code->is_enum = true;
	type_code->native_size = sizeof(::automy::vision::image_format_e);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<vnx::Struct<image_format_e>>(); };
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "value";
		field.code = {3};
	}
	type_code->enum_map[1019334836] = "BAYER_BG";
	type_code->enum_map[1081408084] = "BAYER_GB";
	type_code->enum_map[289905693] = "BAYER_GR";
	type_code->enum_map[334137210] = "BAYER_RG";
	type_code->enum_map[3118165023] = "BGR";
	type_code->enum_map[2218374445] = "CUSTOM";
	type_code->enum_map[2319470177] = "HEIGHT_MAP";
	type_code->enum_map[3019150944] = "OPTICAL_FLOW";
	type_code->enum_map[2689788908] = "RGB";
	type_code->enum_map[672142168] = "RGBA";
	type_code->enum_map[2978415047] = "XYZE";
	type_code->enum_map[2598799393] = "YUV420";
	type_code->enum_map[3701683859] = "YUV420_NV12";
	type_code->enum_map[849750138] = "YUV422";
	type_code->enum_map[2064883057] = "ZE";
	type_code->build();
	return type_code;
}


} // namespace automy
} // namespace vision


namespace vnx {

void read(TypeInput& in, ::automy::vision::image_format_e& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		Variant tmp;
		vnx::read(in, tmp, type_code, code);
		if(tmp.is_string()) {
			vnx::from_string(tmp.to_string(), value);
		} else if(tmp.is_ulong()) {
			value = ::automy::vision::image_format_e::enum_t(tmp.to<uint32_t>());
		} else {
			value = ::automy::vision::image_format_e();
		}
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const auto* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.value, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::automy::vision::image_format_e& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_STRING) {
		vnx::write(out, value.to_string_value(), nullptr, code);
		return;
	}
	if(code && code[0] == CODE_UINT32) {
		vnx::write(out, value.value, nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = automy::vision::vnx_native_type_code_image_format_e;
		out.write_type_code(type_code);
		vnx::write_class_header<::automy::vision::image_format_e>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	auto* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.value);
}

void read(std::istream& in, ::automy::vision::image_format_e& value) {
	value.read(in);
}

void write(std::ostream& out, const ::automy::vision::image_format_e& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::automy::vision::image_format_e& value) {
	value.accept(visitor);
}

void read(TypeInput& in, ::automy::vision::image_format_e::enum_t& value, const TypeCode* type_code, const uint16_t* code) {
	uint32_t tmp = 0;
	vnx::read(in, tmp, type_code, code);
	value = ::automy::vision::image_format_e::enum_t(tmp);
}

void write(TypeOutput& out, const ::automy::vision::image_format_e::enum_t& value, const TypeCode* type_code, const uint16_t* code) {
	vnx::write(out, uint32_t(value), type_code, code);
}

template<>
std::string to_string(const ::automy::vision::image_format_e& _value) {
	return _value.to_string();
}

template<>
std::string to_string_value(const ::automy::vision::image_format_e& _value) {
	return _value.to_string_value();
}

template<>
std::string to_string_value_full(const ::automy::vision::image_format_e& _value) {
	return _value.to_string_value_full();
}

template<>
std::string to_string(const ::automy::vision::image_format_e::enum_t& _value) {
	return ::automy::vision::image_format_e(_value).to_string();
}

template<>
std::string to_string_value(const ::automy::vision::image_format_e::enum_t& _value) {
	return ::automy::vision::image_format_e(_value).to_string_value();
}

template<>
std::string to_string_value_full(const ::automy::vision::image_format_e::enum_t& _value) {
	return ::automy::vision::image_format_e(_value).to_string_value_full();
}

bool is_equivalent<::automy::vision::image_format_e>::operator()(const uint16_t* code, const TypeCode* type_code) {
	if(code[0] != CODE_STRUCT || !type_code) {
		return false;
	}
	type_code = type_code->depends[code[1]];
	return type_code->type_hash == ::automy::vision::image_format_e::VNX_TYPE_HASH && type_code->is_equivalent;
}

} // vnx
