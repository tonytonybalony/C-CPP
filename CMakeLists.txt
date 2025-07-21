cmake_minimum_required(VERSION 3.10)

project(cpp_coding_practice)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
# Optional: For libraries or static archives
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/lib)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/lib)


# Include directories
include_directories(src/c/utils)
include_directories(src/utils)

# Function to create executable from individual file
function(create_executable_from_file filepath)
    get_filename_component(filename ${filepath} NAME_WE)
    add_executable(${filename} ${filepath})
    set_target_properties(${filename} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
    )
endfunction()

# Find all C files and create executables
file(GLOB_RECURSE ALL_C_FILES
    src/c/examples/*.c
    src/c/leetcode/easy/*.c
    src/c/leetcode/medium/*.c
    src/c/leetcode/hard/*.c
    src/c/data_structures/*.c
    src/c/algorithms/sorting/*.c
    src/c/algorithms/searching/*.c
    src/c/projects/*.c
)

# Find all C++ files and create executables
file(GLOB_RECURSE ALL_CPP_FILES
    src/cpp/examples/*.cpp
    src/cpp/leetcode/*.cpp
    src/cpp/algorithms/*.cpp
    src/cpp/data_structures/*.cpp
    src/cpp/oop/*.cpp
    src/cpp/stl/*.cpp
    src/cpp/modern_cpp/*.cpp
    src/cpp/projects/*.cpp
)

# Create executable for each C file
foreach(c_file ${ALL_C_FILES})
    create_executable_from_file(${c_file})
endforeach()

# Create executable for each C++ file
foreach(cpp_file ${ALL_CPP_FILES})
    create_executable_from_file(${cpp_file})
endforeach()