#!/bin/bash

SRC=$1

cp $SRC/vision/interface/CameraInfo.vni interface/
cp $SRC/vision/interface/image_format_e.vni interface/
cp $SRC/vision/interface/ImageFrame*.vni interface/
cp $SRC/vision/interface/MultiImageFrame.vni interface/
cp $SRC/vision/interface/point_t.vni interface/
cp $SRC/vision/interface/PointCloud.vni interface/
cp $SRC/vision/interface/StereoInfo.vni interface/

cp $SRC/vision/src/CameraInfo.cpp src/
cp $SRC/vision/src/StereoInfo.cpp src/

