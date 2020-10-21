cmake_minimum_required(VERSION 3.18)

project(DNI)

add_subdirectory(MDI)
add_subdirectory(src)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
find_package(MDI REQUIRED)

set(MDI_INCLUDE_DIR "MDI")

include_directories(${MDI_INCLUDE_DIR})

target_include_directories(${PROJECT_NAME} PUBLIC MDI)

target_link_directories(${PROJECT_NAME} PRIVATE MDI)

target_link_libraries(${PROJECT_NAME} ${MDI_INCLUDE_DIR})

