
set(THIS adapter)

set(SOURCE_LIST 
	Source/Main.cpp)

set (CMAKE_CXX_STANDARD 17)

add_executable(${THIS} ${SOURCE_LIST})

target_include_directories(${THIS} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Include)

target_link_libraries(${THIS} PRIVATE bitmap)

