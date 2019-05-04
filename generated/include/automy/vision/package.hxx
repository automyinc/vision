
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_automy_vision_PACKAGE_HXX_
#define INCLUDE_automy_vision_PACKAGE_HXX_

#include <vnx/Type.h>

#include <automy/basic/package.hxx>
#include <automy/math/package.hxx>
#include <vnx/package.hxx>


namespace automy {
namespace vision {


class CameraInfo;
class ImageFrame;
class ImageFrame16;
class ImageFrame8;
class ImageFrameF16;
class ImageFrameF32;
class MultiImageFrame;
class PointCloud;
class StereoInfo;
struct image_format_e;
struct point_t;

} // namespace automy
} // namespace vision


namespace vnx {

void read(TypeInput& in, ::automy::vision::CameraInfo& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::vision::ImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::vision::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::vision::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::vision::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::vision::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::vision::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::vision::PointCloud& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::vision::StereoInfo& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::vision::image_format_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::automy::vision::point_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::automy::vision::CameraInfo& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::vision::ImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::vision::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::vision::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::vision::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::vision::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::vision::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::vision::PointCloud& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::vision::StereoInfo& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::vision::image_format_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::automy::vision::point_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void read(std::istream& in, ::automy::vision::CameraInfo& value); ///< \private
void read(std::istream& in, ::automy::vision::ImageFrame& value); ///< \private
void read(std::istream& in, ::automy::vision::ImageFrame16& value); ///< \private
void read(std::istream& in, ::automy::vision::ImageFrame8& value); ///< \private
void read(std::istream& in, ::automy::vision::ImageFrameF16& value); ///< \private
void read(std::istream& in, ::automy::vision::ImageFrameF32& value); ///< \private
void read(std::istream& in, ::automy::vision::MultiImageFrame& value); ///< \private
void read(std::istream& in, ::automy::vision::PointCloud& value); ///< \private
void read(std::istream& in, ::automy::vision::StereoInfo& value); ///< \private
void read(std::istream& in, ::automy::vision::image_format_e& value); ///< \private
void read(std::istream& in, ::automy::vision::point_t& value); ///< \private

void write(std::ostream& out, const ::automy::vision::CameraInfo& value); ///< \private
void write(std::ostream& out, const ::automy::vision::ImageFrame& value); ///< \private
void write(std::ostream& out, const ::automy::vision::ImageFrame16& value); ///< \private
void write(std::ostream& out, const ::automy::vision::ImageFrame8& value); ///< \private
void write(std::ostream& out, const ::automy::vision::ImageFrameF16& value); ///< \private
void write(std::ostream& out, const ::automy::vision::ImageFrameF32& value); ///< \private
void write(std::ostream& out, const ::automy::vision::MultiImageFrame& value); ///< \private
void write(std::ostream& out, const ::automy::vision::PointCloud& value); ///< \private
void write(std::ostream& out, const ::automy::vision::StereoInfo& value); ///< \private
void write(std::ostream& out, const ::automy::vision::image_format_e& value); ///< \private
void write(std::ostream& out, const ::automy::vision::point_t& value); ///< \private

void accept(Visitor& visitor, const ::automy::vision::CameraInfo& value); ///< \private
void accept(Visitor& visitor, const ::automy::vision::ImageFrame& value); ///< \private
void accept(Visitor& visitor, const ::automy::vision::ImageFrame16& value); ///< \private
void accept(Visitor& visitor, const ::automy::vision::ImageFrame8& value); ///< \private
void accept(Visitor& visitor, const ::automy::vision::ImageFrameF16& value); ///< \private
void accept(Visitor& visitor, const ::automy::vision::ImageFrameF32& value); ///< \private
void accept(Visitor& visitor, const ::automy::vision::MultiImageFrame& value); ///< \private
void accept(Visitor& visitor, const ::automy::vision::PointCloud& value); ///< \private
void accept(Visitor& visitor, const ::automy::vision::StereoInfo& value); ///< \private
void accept(Visitor& visitor, const ::automy::vision::image_format_e& value); ///< \private
void accept(Visitor& visitor, const ::automy::vision::point_t& value); ///< \private

/// \private
template<>
struct type<::automy::vision::CameraInfo> {
	void read(TypeInput& in, ::automy::vision::CameraInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::CameraInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::CameraInfo& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::CameraInfo& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::CameraInfo& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::vision::ImageFrame> {
	void read(TypeInput& in, ::automy::vision::ImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::ImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::ImageFrame& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::ImageFrame& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::ImageFrame& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::vision::ImageFrame16> {
	void read(TypeInput& in, ::automy::vision::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::ImageFrame16& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::ImageFrame16& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::ImageFrame16& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::vision::ImageFrame8> {
	void read(TypeInput& in, ::automy::vision::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::ImageFrame8& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::ImageFrame8& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::ImageFrame8& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::vision::ImageFrameF16> {
	void read(TypeInput& in, ::automy::vision::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::ImageFrameF16& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::ImageFrameF16& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::ImageFrameF16& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::vision::ImageFrameF32> {
	void read(TypeInput& in, ::automy::vision::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::ImageFrameF32& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::ImageFrameF32& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::ImageFrameF32& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::vision::MultiImageFrame> {
	void read(TypeInput& in, ::automy::vision::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::MultiImageFrame& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::MultiImageFrame& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::MultiImageFrame& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::vision::PointCloud> {
	void read(TypeInput& in, ::automy::vision::PointCloud& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::PointCloud& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::PointCloud& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::PointCloud& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::PointCloud& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::vision::StereoInfo> {
	void read(TypeInput& in, ::automy::vision::StereoInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::StereoInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::StereoInfo& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::StereoInfo& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::StereoInfo& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::vision::image_format_e> {
	void read(TypeInput& in, ::automy::vision::image_format_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::image_format_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::image_format_e& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::image_format_e& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::image_format_e& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::automy::vision::point_t> {
	void read(TypeInput& in, ::automy::vision::point_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::automy::vision::point_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::automy::vision::point_t& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::automy::vision::point_t& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::automy::vision::point_t& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};


} // namespace vnx

#endif // INCLUDE_automy_vision_PACKAGE_HXX_
