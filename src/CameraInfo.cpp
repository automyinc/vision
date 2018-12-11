/*
 * CameraInfo.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: mad
 */

#include <vision/CameraInfo.hxx>

#include <math/Math3D.h>
using namespace math;


namespace vision {

void CameraInfo::update() {
	matrix = translate3(position) * rotate3_xyz_intrinsic(rotation);
}


} // vision
