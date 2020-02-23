
set(THIS state)

set(SOURCE_FILES
	source/phone.cpp
	source/main.cpp)

set (CMAKE_CXX_STANDARD 17)

add_executable(${THIS} ${SOURCE_FILES})

target_include_directories(${THIS} PRIVATE include)

