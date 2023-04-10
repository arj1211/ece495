project(Path_Planning)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++11)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

set(OPENSSL_ROOT_DIR /opt/homebrew/opt/openssl@3)
set(OPENSSL_LIB_DIR ${OPENSSL_ROOT_DIR}/lib)
set(OPENSSL_INCLUDE_DIR ${OPENSSL_ROOT_DIR}/include)

set(LIBUV_ROOT_DIR /opt/homebrew/Cellar/libuv/1.44.2)
set(LIBUV_LIB_DIR ${LIBUV_ROOT_DIR}/lib)
set(LIBUV_INCLUDE_DIR ${LIBUV_ROOT_DIR}/include)

include_directories(${OPENSSL_INCLUDE_DIR} ${LIBUV_INCLUDE_DIR})
link_directories(${OPENSSL_LIB_DIR} ${LIBUV_LIB_DIR})

set(sources src/main.cpp)


if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin") 

include_directories(/usr/local/include)
include_directories(/usr/local/opt/openssl/include)
link_directories(/usr/local/lib)
link_directories(/usr/local/opt/openssl/lib)
link_directories(/usr/local/Cellar/libuv/1.11.0/lib)

endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin") 


add_executable(path_planning ${sources})

target_link_libraries(path_planning z ssl uv uWS)
