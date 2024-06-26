
// AUTO GENERATED by vnxcppcodegen

#include <automy/vision/package.hxx>
#include <automy/vision/ImageFrame8.hxx>
#include <automy/basic/Image8.hpp>
#include <automy/vision/ImageFrame.hxx>

#include <vnx/vnx.h>


namespace automy {
namespace vision {


const vnx::Hash64 ImageFrame8::VNX_TYPE_HASH(0xdedd031b29089a86ull);
const vnx::Hash64 ImageFrame8::VNX_CODE_HASH(0xe00f9f6cb07879a2ull);

vnx::Hash64 ImageFrame8::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string ImageFrame8::get_type_name() const {
	return "automy.vision.ImageFrame8";
}

const vnx::TypeCode* ImageFrame8::get_type_code() const {
	return automy::vision::vnx_native_type_code_ImageFrame8;
}

std::shared_ptr<ImageFrame8> ImageFrame8::create() {
	return std::make_shared<ImageFrame8>();
}

std::shared_ptr<vnx::Value> ImageFrame8::clone() const {
	return std::make_shared<ImageFrame8>(*this);
}

void ImageFrame8::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void ImageFrame8::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void ImageFrame8::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = automy::vision::vnx_native_type_code_ImageFrame8;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, time_end);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, format);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, frame);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, layer);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, intensity);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, properties);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, image);
	_visitor.type_end(*_type_code);
}

void ImageFrame8::write(std::ostream& _out) const {
	_out << "{\"__type\": \"automy.vision.ImageFrame8\"";
	_out << ", \"time\": "; vnx::write(_out, time);
	_out << ", \"time_end\": "; vnx::write(_out, time_end);
	_out << ", \"format\": "; vnx::write(_out, format);
	_out << ", \"frame\": "; vnx::write(_out, frame);
	_out << ", \"layer\": "; vnx::write(_out, layer);
	_out << ", \"intensity\": "; vnx::write(_out, intensity);
	_out << ", \"properties\": "; vnx::write(_out, properties);
	_out << ", \"image\": "; vnx::write(_out, image);
	_out << "}";
}

void ImageFrame8::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object ImageFrame8::to_object() const {
	vnx::Object _object;
	_object["__type"] = "automy.vision.ImageFrame8";
	_object["time"] = time;
	_object["time_end"] = time_end;
	_object["format"] = format;
	_object["frame"] = frame;
	_object["layer"] = layer;
	_object["intensity"] = intensity;
	_object["properties"] = properties;
	_object["image"] = image;
	return _object;
}

void ImageFrame8::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "format") {
			_entry.second.to(format);
		} else if(_entry.first == "frame") {
			_entry.second.to(frame);
		} else if(_entry.first == "image") {
			_entry.second.to(image);
		} else if(_entry.first == "intensity") {
			_entry.second.to(intensity);
		} else if(_entry.first == "layer") {
			_entry.second.to(layer);
		} else if(_entry.first == "properties") {
			_entry.second.to(properties);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		} else if(_entry.first == "time_end") {
			_entry.second.to(time_end);
		}
	}
}

vnx::Variant ImageFrame8::get_field(const std::string& _name) const {
	if(_name == "time") {
		return vnx::Variant(time);
	}
	if(_name == "time_end") {
		return vnx::Variant(time_end);
	}
	if(_name == "format") {
		return vnx::Variant(format);
	}
	if(_name == "frame") {
		return vnx::Variant(frame);
	}
	if(_name == "layer") {
		return vnx::Variant(layer);
	}
	if(_name == "intensity") {
		return vnx::Variant(intensity);
	}
	if(_name == "properties") {
		return vnx::Variant(properties);
	}
	if(_name == "image") {
		return vnx::Variant(image);
	}
	return vnx::Variant();
}

void ImageFrame8::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "time") {
		_value.to(time);
	} else if(_name == "time_end") {
		_value.to(time_end);
	} else if(_name == "format") {
		_value.to(format);
	} else if(_name == "frame") {
		_value.to(frame);
	} else if(_name == "layer") {
		_value.to(layer);
	} else if(_name == "intensity") {
		_value.to(intensity);
	} else if(_name == "properties") {
		_value.to(properties);
	} else if(_name == "image") {
		_value.to(image);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ImageFrame8& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ImageFrame8& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ImageFrame8::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ImageFrame8::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "automy.vision.ImageFrame8";
	type_code->type_hash = vnx::Hash64(0xdedd031b29089a86ull);
	type_code->code_hash = vnx::Hash64(0xe00f9f6cb07879a2ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::automy::vision::ImageFrame8);
	type_code->parents.resize(1);
	type_code->parents[0] = ::automy::vision::ImageFrame::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<ImageFrame8>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::automy::vision::image_format_e::static_get_type_code();
	type_code->fields.resize(8);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 8;
		field.name = "time_end";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "format";
		field.code = {19, 0};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "frame";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[4];
		field.data_size = 4;
		field.name = "layer";
		field.value = vnx::to_string(0);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[5];
		field.data_size = 4;
		field.name = "intensity";
		field.value = vnx::to_string(-1);
		field.code = {9};
	}
	{
		auto& field = type_code->fields[6];
		field.is_extended = true;
		field.name = "properties";
		field.code = {13, 3, 32, 17};
	}
	{
		auto& field = type_code->fields[7];
		field.is_extended = true;
		field.name = "image";
		field.code = {22, 3, 1};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> ImageFrame8::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
	}
	return nullptr;
}


} // namespace automy
} // namespace vision


namespace vnx {

void read(TypeInput& in, ::automy::vision::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code) {
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
		vnx::skip(in, type_code, code);
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
			vnx::read_value(_buf + _field->offset, value.time, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.time_end, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[4]) {
			vnx::read_value(_buf + _field->offset, value.layer, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[5]) {
			vnx::read_value(_buf + _field->offset, value.intensity, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 2: vnx::read(in, value.format, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.frame, type_code, _field->code.data()); break;
			case 6: vnx::read(in, value.properties, type_code, _field->code.data()); break;
			case 7: vnx::read(in, value.image, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::automy::vision::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = automy::vision::vnx_native_type_code_ImageFrame8;
		out.write_type_code(type_code);
		vnx::write_class_header<::automy::vision::ImageFrame8>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	auto* const _buf = out.write(24);
	vnx::write_value(_buf + 0, value.time);
	vnx::write_value(_buf + 8, value.time_end);
	vnx::write_value(_buf + 16, value.layer);
	vnx::write_value(_buf + 20, value.intensity);
	vnx::write(out, value.format, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.frame, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.properties, type_code, type_code->fields[6].code.data());
	vnx::write(out, value.image, type_code, type_code->fields[7].code.data());
}

void read(std::istream& in, ::automy::vision::ImageFrame8& value) {
	value.read(in);
}

void write(std::ostream& out, const ::automy::vision::ImageFrame8& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::automy::vision::ImageFrame8& value) {
	value.accept(visitor);
}

} // vnx
