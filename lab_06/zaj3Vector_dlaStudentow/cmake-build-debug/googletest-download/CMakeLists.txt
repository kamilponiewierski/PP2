cmake_minimum_required(VERSION 3.15)

project(googletest-download NONE)

set(CMAKE_CXX_STANDARD 17)

include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           master
  SOURCE_DIR        "/home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/googletest-src"
  BINARY_DIR        "/home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)
