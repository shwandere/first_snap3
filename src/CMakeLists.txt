cmake_minimum_required(VERSION 2.6)
set (CMAKE_CXX_COMPILER /usr/bin/g++ )
set (CMAKE_CXX_STANDARD 14)

project(image-reading2)

set(myprog code.cpp)
set(LIBRARIE ../src/files/libraries/)
set(INCLUDE_ ../src/files/include/)
set(CMAKE_PREFIX_PATH ${LIBRARIE})
#link_directories("${CMAKE_CURRENT_SOURCE_DIR}/files/libraries/")
#add_library(opencv_lib SHARED IMPORTED)
#set_property(TARGET opencv_lib PROPERTY IMPORTED_LOCATION "${LIBRARIE}/libopencv_highgui.so")
#set_property(TARGET opencv_lib PROPERTY IMPORTED_LOCATION "${LIBRARIE}/libopencv_core.so")
#set_property(TARGET opencv_lib PROPERTY IMPORTED_LOCATION "${LIBRARIE}/libopencv_imgcodecs.so")
#set_property(TARGET opencv_lib PROPERTY IMPORTED_LOCATION "${LIBRARIE}/libopencv_imgproc.so")
#add_library(libopencv_highgui SHARED ${CMAKE_CURRENT_SOURCE_DIR})
#add_library(libopencv_core SHARED ${CMAKE_CURRENT_SOURCE_DIR})
#add_library(libopencv_imgcodecs SHARED ${CMAKE_CURRENT_SOURCE_DIR})
#add_library(libopencv_imgproc SHARED ${CMAKE_CURRENT_SOURCE_DIR})
#set_target_properties(libopencv_highgui PROPERTIES IMPORTED_LOCATION ${CMAKE_BINARY_DIR}/res/libopencv_highgui.so})
#set_target_properties(libopencv_core PROPERTIES IMPORTED_LOCATION ${CMAKE_BINARY_DIR}/res/libopencv_core.so})
#set_target_properties(libopencv_highgui PROPERTIES IMPORTED_LOCATION ${CMAKE_BINARY_DIR}/res/libopencv_imgcodecs.so})
#set_target_properties(libopencv_imgproc PROPERTIES IMPORTED_LOCATION ${CMAKE_BINARY_DIR}/res/libopencv_imgproc.so})
#message (STATUS LIBRARIE)
#message(STATUS ${LIBRARIE} )
#message(STATUS ${CMAKE_CURRENT_SOURCE_DIR}/files/libraries/)
#find_library(LIBRARIES NAMES libopencv_imgcodecs.so PATHS "/media/linux/New Volume/snap/cmake_project/files/libraries/")
#find_library(LIBRARIES1 NAMES libopencv_highgui.so PATHS "/media/linux/New Volume/snap/cmake_project/files/libraries/")
#find_library(LIBRARIES1 NAMES libopencv_core.so )
#find_library(LIBRARIES2 NAMES libopencv_highgui.so )
#find_library(LIBRARIES3 NAMES libopencv_imgcodecs.so )
#find_library(LIBRARIES4 NAMES libopencv_imgproc.so )
#find_library(LIBRARIES3 NAMES libopencv_imgproc.so PATHS "/media/linux/New Volume/snap/cmake_project/files/libraries/")
#message(STATUS ${LIBRARIES} )
include_directories(${INCLUDE_})

add_executable(${PROJECT_NAME} ${myprog})

message(STATUS ${SNAP_APP_PATH} )
message(STATUS ${SNAP_APP_DATA_PATH})
#target_link_libraries(${PROJECT_NAME})
target_link_libraries(${PROJECT_NAME} opencv_lib)
