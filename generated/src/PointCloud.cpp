
// AUTO GENERATED by vnxcppcodegen

#include <automy/vision/package.hxx>
#include <automy/vision/PointCloud.hxx>
#include <automy/vision/CameraInfo.hxx>
#include <automy/vision/point_t.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace automy {
namespace vision {


const vnx::Hash64 PointCloud::VNX_TYPE_HASH(0xa41d03221ab426c0ull);
const vnx::Hash64 PointCloud::VNX_CODE_HASH(0xc577c826129f9205ull);

vnx::Hash64 PointCloud::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string PointCloud::get_type_name() const {
	return "automy.vision.PointCloud";
}

const vnx::TypeCode* PointCloud::get_type_code() const {
	return automy::vision::vnx_native_type_code_PointCloud;
}

std::shared_ptr<PointCloud> PointCloud::create() {
	return std::make_shared<PointCloud>();
}

std::shared_ptr<vnx::Value> PointCloud::clone() const {
	return std::make_shared<PointCloud>(*this);
}

void PointCloud::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void PointCloud::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void PointCloud::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = automy::vision::vnx_native_type_code_PointCloud;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, frame);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, camera_info);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, points);
	_visitor.type_end(*_type_code);
}

void PointCloud::write(std::ostream& _out) const {
	_out << "{\"__type\": \"automy.vision.PointCloud\"";
	_out << ", \"time\": "; vnx::write(_out, time);
	_out << ", \"frame\": "; vnx::write(_out, frame);
	_out << ", \"camera_info\": "; vnx::write(_out, camera_info);
	_out << ", \"points\": "; vnx::write(_out, points);
	_out << "}";
}

void PointCloud::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object PointCloud::to_object() const {
	vnx::Object _object;
	_object["__type"] = "automy.vision.PointCloud";
	_object["time"] = time;
	_object["frame"] = frame;
	_object["camera_info"] = camera_info;
	_object["points"] = points;
	return _object;
}

void PointCloud::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "camera_info") {
			_entry.second.to(camera_info);
		} else if(_entry.first == "frame") {
			_entry.second.to(frame);
		} else if(_entry.first == "points") {
			_entry.second.to(points);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		}
	}
}

vnx::Variant PointCloud::get_field(const std::string& _name) const {
	if(_name == "time") {
		return vnx::Variant(time);
	}
	if(_name == "frame") {
		return vnx::Variant(frame);
	}
	if(_name == "camera_info") {
		return vnx::Variant(camera_info);
	}
	if(_name == "points") {
		return vnx::Variant(points);
	}
	return vnx::Variant();
}

void PointCloud::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "time") {
		_value.to(time);
	} else if(_name == "frame") {
		_value.to(frame);
	} else if(_name == "camera_info") {
		_value.to(camera_info);
	} else if(_name == "points") {
		_value.to(points);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const PointCloud& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, PointCloud& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* PointCloud::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> PointCloud::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "automy.vision.PointCloud";
	type_code->type_hash = vnx::Hash64(0xa41d03221ab426c0ull);
	type_code->code_hash = vnx::Hash64(0xc577c826129f9205ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::automy::vision::PointCloud);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<PointCloud>(); };
	type_code->depends.resize(2);
	type_code->depends[0] = ::automy::vision::CameraInfo::static_get_type_code();
	type_code->depends[1] = ::automy::vision::point_t::static_get_type_code();
	type_code->fields.resize(4);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "frame";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "camera_info";
		field.code = {19, 0};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "points";
		field.code = {12, 19, 1};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> PointCloud::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
	}
	return nullptr;
}


} // namespace automy
} // namespace vision


namespace vnx {

void read(TypeInput& in, ::automy::vision::PointCloud& value, const TypeCode* type_code, const uint16_t* code) {
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
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.frame, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.camera_info, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.points, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::automy::vision::PointCloud& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = automy::vision::vnx_native_type_code_PointCloud;
		out.write_type_code(type_code);
		vnx::write_class_header<::automy::vision::PointCloud>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	auto* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.time);
	vnx::write(out, value.frame, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.camera_info, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.points, type_code, type_code->fields[3].code.data());
}

void read(std::istream& in, ::automy::vision::PointCloud& value) {
	value.read(in);
}

void write(std::ostream& out, const ::automy::vision::PointCloud& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::automy::vision::PointCloud& value) {
	value.accept(visitor);
}

} // vnx
