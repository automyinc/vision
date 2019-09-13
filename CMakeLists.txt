cmake_minimum_required(VERSION 2.6)
project(automy-vision)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC -pthread")

file(GLOB GENERATED_SOURCE_FILES generated/src/*.cpp)

add_library(automy_vision SHARED
	${GENERATED_SOURCE_FILES}
	src/CameraInfo.cpp
	src/StereoInfo.cpp
)

target_include_directories(automy_vision PUBLIC include generated/include)

target_link_libraries(automy_vision automy_vehicle automy_basic automy_math vnx_base)

add_executable(example_stereo_client example/stereo_client.cpp)
target_link_libraries(example_stereo_client automy_vision automy_vehicle)

install(DIRECTORY include/ DESTINATION include)
install(DIRECTORY generated/include/ DESTINATION include)
install(DIRECTORY interface/ DESTINATION interface/automy/vision)

install(TARGETS automy_vision DESTINATION lib)
