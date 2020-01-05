
set(THIS bitmap)

set(SOURCE_LIST 
	Source/Bitmap.cpp)

set (CMAKE_CXX_STANDARD 17)

add_library(${THIS} STATIC ${SOURCE_LIST})

target_include_directories(${THIS} PUBLIC Include PRIVATE Source)

