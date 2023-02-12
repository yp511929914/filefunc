cmake_minimum_required(VERSION 3.5)
# 指定生成目标
SET(LIB			"lib")
SET(BIN			"bin")
# 设置工程名
project (hello_cmake)

aux_source_directory(. DIR_SRCS)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -g")

# 添加头文件路径
include_directories("${CMAKE_SOURCE_DIR}/filedeal/include")
include_directories("${CMAKE_SOURCE_DIR}/tcpcomm/include")

# 添加 子目录
add_subdirectory(filedeal)
add_subdirectory(tcpcomm)




FILE(GLOB SRC_LIST	./*.cpp)

#set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/${LIB})
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/${BIN})
add_executable(hello_cmake ${SRC_LIST})

# 添加链接库
target_link_libraries(hello_cmake 
filedeal 
tcpcomm
)