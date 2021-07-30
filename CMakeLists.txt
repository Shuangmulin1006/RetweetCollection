cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(foundations VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# set(sources main.cpp RetweetCollectionTest.cpp)
add_executable(test main.cpp RetweetCollectionTest.cpp)

list(APPEND EXTRA_LIBS gtest gmock pthread)
target_link_libraries(test PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(test PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
