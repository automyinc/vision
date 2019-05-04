#!/bin/bash

SRC=$1

cp $SRC/interface/CameraInfo.vni interface/
cp $SRC/interface/image_format_e.vni interface/
cp $SRC/interface/ImageFrame*.vni interface/
cp $SRC/interface/MultiImageFrame.vni interface/
cp $SRC/interface/point_t.vni interface/
cp $SRC/interface/PointCloud.vni interface/
cp $SRC/interface/StereoInfo.vni interface/

cp $SRC/src/CameraInfo.cpp src/
cp $SRC/src/StereoInfo.cpp src/

