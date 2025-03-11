cmake_minimum_required(VERSION 3.10)
project(NebuLua)

set(CMAKE_C_STANDARD 11)

# Source files
set(SRC_FILES src/main.c)

# Lua files (use only onelua.c to avoid multiple definitions)
set(LUA_FILES lib/lua/onelua.c)

# Define a macro to disable Lua's main function
add_definitions(-DLUA_USE_CUSTOM_MAIN)

# Create the executable
add_executable(NebuLua ${SRC_FILES} ${LUA_FILES})

# Include Lua headers
target_include_directories(NebuLua PRIVATE lib/lua)
