
// AUTO GENERATED by vnxcppcodegen

#include <automy/vision/package.hxx>
#include <automy/vision/StereoInfo.hxx>
#include <vnx/Input.h>
#include <vnx/Output.h>
#include <vnx/Visitor.h>
#include <vnx/Object.h>
#include <vnx/Struct.h>


namespace automy {
namespace vision {


const vnx::Hash64 StereoInfo::VNX_TYPE_HASH(0x5df836f6f5ebcdbdull);
const vnx::Hash64 StereoInfo::VNX_CODE_HASH(0xf0d510d47a7548f3ull);

vnx::Hash64 StereoInfo::get_type_hash() const {
	return VNX_TYPE_HASH;
}

const char* StereoInfo::get_type_name() const {
	return "automy.vision.StereoInfo";
}

std::shared_ptr<StereoInfo> StereoInfo::create() {
	return std::make_shared<StereoInfo>();
}

std::shared_ptr<vnx::Value> StereoInfo::clone() const {
	return std::make_shared<StereoInfo>(*this);
}

void StereoInfo::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void StereoInfo::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void StereoInfo::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = get_type_code();
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, matrix);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, rotation);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, baseline);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, focal_length_factor);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, priority);
	_visitor.type_end(*_type_code);
}

void StereoInfo::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"time\": "; vnx::write(_out, time);
	_out << ", \"matrix\": "; vnx::write(_out, matrix);
	_out << ", \"rotation\": "; vnx::write(_out, rotation);
	_out << ", \"baseline\": "; vnx::write(_out, baseline);
	_out << ", \"focal_length_factor\": "; vnx::write(_out, focal_length_factor);
	_out << ", \"priority\": "; vnx::write(_out, priority);
	_out << "}";
}

void StereoInfo::read(std::istream& _in) {
	std::map<std::string, std::string> _object;
	vnx::read_object(_in, _object);
	for(const auto& _entry : _object) {
		if(_entry.first == "baseline") {
			vnx::from_string(_entry.second, baseline);
		} else if(_entry.first == "focal_length_factor") {
			vnx::from_string(_entry.second, focal_length_factor);
		} else if(_entry.first == "matrix") {
			vnx::from_string(_entry.second, matrix);
		} else if(_entry.first == "priority") {
			vnx::from_string(_entry.second, priority);
		} else if(_entry.first == "rotation") {
			vnx::from_string(_entry.second, rotation);
		} else if(_entry.first == "time") {
			vnx::from_string(_entry.second, time);
		}
	}
}

vnx::Object StereoInfo::to_object() const {
	vnx::Object _object;
	_object["time"] = time;
	_object["matrix"] = matrix;
	_object["rotation"] = rotation;
	_object["baseline"] = baseline;
	_object["focal_length_factor"] = focal_length_factor;
	_object["priority"] = priority;
	return _object;
}

void StereoInfo::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "baseline") {
			_entry.second.to(baseline);
		} else if(_entry.first == "focal_length_factor") {
			_entry.second.to(focal_length_factor);
		} else if(_entry.first == "matrix") {
			_entry.second.to(matrix);
		} else if(_entry.first == "priority") {
			_entry.second.to(priority);
		} else if(_entry.first == "rotation") {
			_entry.second.to(rotation);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		}
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const StereoInfo& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, StereoInfo& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* StereoInfo::get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(vnx::Hash64(0x5df836f6f5ebcdbdull));
	if(!type_code) {
		type_code = vnx::register_type_code(create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> StereoInfo::create_type_code() {
	std::shared_ptr<vnx::TypeCode> type_code = std::make_shared<vnx::TypeCode>(true);
	type_code->name = "automy.vision.StereoInfo";
	type_code->type_hash = vnx::Hash64(0x5df836f6f5ebcdbdull);
	type_code->code_hash = vnx::Hash64(0xf0d510d47a7548f3ull);
	type_code->is_class = true;
	type_code->parents.resize(1);
	type_code->parents[0] = ::automy::basic::Transform3D::get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<StereoInfo>(); };
	type_code->fields.resize(6);
	{
		vnx::TypeField& field = type_code->fields[0];
		field.name = "time";
		field.code = {8};
	}
	{
		vnx::TypeField& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "matrix";
		field.code = {21, 2, 4, 4, 10};
	}
	{
		vnx::TypeField& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "rotation";
		field.code = {21, 2, 3, 1, 10};
	}
	{
		vnx::TypeField& field = type_code->fields[3];
		field.name = "baseline";
		field.code = {10};
	}
	{
		vnx::TypeField& field = type_code->fields[4];
		field.name = "focal_length_factor";
		field.value = vnx::to_string(1);
		field.code = {9};
	}
	{
		vnx::TypeField& field = type_code->fields[5];
		field.name = "priority";
		field.value = vnx::to_string(0);
		field.code = {9};
	}
	type_code->build();
	return type_code;
}


} // namespace automy
} // namespace vision


namespace vnx {

void read(TypeInput& in, ::automy::vision::StereoInfo& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code) {
		throw std::logic_error("read(): type_code == 0");
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: vnx::skip(in, type_code, code); return;
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		{
			const vnx::TypeField* const _field = type_code->field_map[0];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.time, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[3];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.baseline, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[4];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.focal_length_factor, _field->code.data());
			}
		}
		{
			const vnx::TypeField* const _field = type_code->field_map[5];
			if(_field) {
				vnx::read_value(_buf + _field->offset, value.priority, _field->code.data());
			}
		}
	}
	for(const vnx::TypeField* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.matrix, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.rotation, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::automy::vision::StereoInfo& value, const TypeCode* type_code, const uint16_t* code) {
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::write_type_code<::automy::vision::StereoInfo>(out);
		vnx::write_class_header<::automy::vision::StereoInfo>(out);
	}
	if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(24);
	vnx::write_value(_buf + 0, value.time);
	vnx::write_value(_buf + 8, value.baseline);
	vnx::write_value(_buf + 16, value.focal_length_factor);
	vnx::write_value(_buf + 20, value.priority);
	vnx::write(out, value.matrix, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.rotation, type_code, type_code->fields[2].code.data());
}

void read(std::istream& in, ::automy::vision::StereoInfo& value) {
	value.read(in);
}

void write(std::ostream& out, const ::automy::vision::StereoInfo& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::automy::vision::StereoInfo& value) {
	value.accept(visitor);
}

} // vnx
