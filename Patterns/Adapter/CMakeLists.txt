
set(THIS adapter)

set(SOURCE
	Source/Main.cpp)

set (CMAKE_CXX_STANDARD 17)

add_executable(${THIS} ${SOURCE})

target_include_directories(${THIS} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Include)

target_link_libraries(${THIS} PRIVATE bitmap)

