
set(THIS bridge)

set(SOURCE 
	Source/PimplIdiom.cpp
	Source/Main.cpp)

set (CMAKE_CXX_STANDARD 17)

add_executable(${THIS} ${SOURCE})

target_include_directories(${THIS} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Include)

