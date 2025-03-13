cmake_minimum_required(VERSION 3.10)
project(NebuLua)

set(CMAKE_C_STANDARD 11)

add_subdirectory(lib)

# Source files
set(SRC_FILES src/main.c)

# Create the executable
add_executable(${PROJECT_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_NAME} PRIVATE LuaLib)

target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/lib/lua")

# Find and link ncursesw
find_package(PkgConfig REQUIRED)
pkg_check_modules(NCURSES REQUIRED ncursesw)

target_include_directories(${PROJECT_NAME} PRIVATE ${NCURSES_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE ${NCURSES_LIBRARIES})
