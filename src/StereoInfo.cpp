/*
 * StereoInfo.cpp
 *
 *  Created on: Apr 3, 2018
 *      Author: mad
 */

#include <vision/StereoInfo.hxx>

#include <math/Math3D.h>
using namespace math;


namespace vision {

void StereoInfo::update() {
	matrix = translate3<double>(0, baseline, 0) * rotate3_xyz_intrinsic(rotation);
}


} // vision
