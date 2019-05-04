/*
 * CameraInfo.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: mad
 */

#include <automy/vision/CameraInfo.hxx>
#include <automy/math/Math3D.h>

using namespace automy::math;


namespace automy {
namespace vision {

void CameraInfo::update() {
	matrix = translate3(position) * rotate3_xyz_intrinsic(rotation);
}


} // vision
} // automy
