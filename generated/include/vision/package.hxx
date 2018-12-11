
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vision_PACKAGE_HXX_
#define INCLUDE_vision_PACKAGE_HXX_

#include <vnx/Type.h>

#include <basic/package.hxx>
#include <math/package.hxx>
#include <vehicle/package.hxx>
#include <vnx/package.hxx>


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

} // namespace vision


namespace vnx {

void read(TypeInput& in, ::vision::CameraInfo& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::vision::ImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::vision::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::vision::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::vision::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::vision::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::vision::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::vision::PointCloud& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::vision::StereoInfo& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::vision::image_format_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::vision::point_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::vision::CameraInfo& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::vision::ImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::vision::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::vision::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::vision::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::vision::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::vision::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::vision::PointCloud& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::vision::StereoInfo& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::vision::image_format_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::vision::point_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void read(std::istream& in, ::vision::CameraInfo& value); ///< \private
void read(std::istream& in, ::vision::ImageFrame& value); ///< \private
void read(std::istream& in, ::vision::ImageFrame16& value); ///< \private
void read(std::istream& in, ::vision::ImageFrame8& value); ///< \private
void read(std::istream& in, ::vision::ImageFrameF16& value); ///< \private
void read(std::istream& in, ::vision::ImageFrameF32& value); ///< \private
void read(std::istream& in, ::vision::MultiImageFrame& value); ///< \private
void read(std::istream& in, ::vision::PointCloud& value); ///< \private
void read(std::istream& in, ::vision::StereoInfo& value); ///< \private
void read(std::istream& in, ::vision::image_format_e& value); ///< \private
void read(std::istream& in, ::vision::point_t& value); ///< \private

void write(std::ostream& out, const ::vision::CameraInfo& value); ///< \private
void write(std::ostream& out, const ::vision::ImageFrame& value); ///< \private
void write(std::ostream& out, const ::vision::ImageFrame16& value); ///< \private
void write(std::ostream& out, const ::vision::ImageFrame8& value); ///< \private
void write(std::ostream& out, const ::vision::ImageFrameF16& value); ///< \private
void write(std::ostream& out, const ::vision::ImageFrameF32& value); ///< \private
void write(std::ostream& out, const ::vision::MultiImageFrame& value); ///< \private
void write(std::ostream& out, const ::vision::PointCloud& value); ///< \private
void write(std::ostream& out, const ::vision::StereoInfo& value); ///< \private
void write(std::ostream& out, const ::vision::image_format_e& value); ///< \private
void write(std::ostream& out, const ::vision::point_t& value); ///< \private

void accept(Visitor& visitor, const ::vision::CameraInfo& value); ///< \private
void accept(Visitor& visitor, const ::vision::ImageFrame& value); ///< \private
void accept(Visitor& visitor, const ::vision::ImageFrame16& value); ///< \private
void accept(Visitor& visitor, const ::vision::ImageFrame8& value); ///< \private
void accept(Visitor& visitor, const ::vision::ImageFrameF16& value); ///< \private
void accept(Visitor& visitor, const ::vision::ImageFrameF32& value); ///< \private
void accept(Visitor& visitor, const ::vision::MultiImageFrame& value); ///< \private
void accept(Visitor& visitor, const ::vision::PointCloud& value); ///< \private
void accept(Visitor& visitor, const ::vision::StereoInfo& value); ///< \private
void accept(Visitor& visitor, const ::vision::image_format_e& value); ///< \private
void accept(Visitor& visitor, const ::vision::point_t& value); ///< \private

/// \private
template<>
struct type<::vision::CameraInfo> {
	void read(TypeInput& in, ::vision::CameraInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::CameraInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::CameraInfo& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::CameraInfo& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::CameraInfo& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::vision::ImageFrame> {
	void read(TypeInput& in, ::vision::ImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::ImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::ImageFrame& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::ImageFrame& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::ImageFrame& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::vision::ImageFrame16> {
	void read(TypeInput& in, ::vision::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::ImageFrame16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::ImageFrame16& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::ImageFrame16& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::ImageFrame16& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::vision::ImageFrame8> {
	void read(TypeInput& in, ::vision::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::ImageFrame8& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::ImageFrame8& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::ImageFrame8& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::ImageFrame8& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::vision::ImageFrameF16> {
	void read(TypeInput& in, ::vision::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::ImageFrameF16& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::ImageFrameF16& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::ImageFrameF16& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::ImageFrameF16& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::vision::ImageFrameF32> {
	void read(TypeInput& in, ::vision::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::ImageFrameF32& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::ImageFrameF32& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::ImageFrameF32& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::ImageFrameF32& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::vision::MultiImageFrame> {
	void read(TypeInput& in, ::vision::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::MultiImageFrame& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::MultiImageFrame& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::MultiImageFrame& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::MultiImageFrame& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::vision::PointCloud> {
	void read(TypeInput& in, ::vision::PointCloud& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::PointCloud& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::PointCloud& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::PointCloud& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::PointCloud& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::vision::StereoInfo> {
	void read(TypeInput& in, ::vision::StereoInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::StereoInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::StereoInfo& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::StereoInfo& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::StereoInfo& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::vision::image_format_e> {
	void read(TypeInput& in, ::vision::image_format_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::image_format_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::image_format_e& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::image_format_e& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::image_format_e& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};

/// \private
template<>
struct type<::vision::point_t> {
	void read(TypeInput& in, ::vision::point_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vision::point_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vision::point_t& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vision::point_t& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vision::point_t& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code) {
		code.push_back(CODE_ANY);
	}
};


} // namespace vnx

#endif // INCLUDE_vision_PACKAGE_HXX_
