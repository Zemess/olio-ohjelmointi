cmake_minimum_required(VERSION 3.5)

project(tehtava_1_ja_2_tomiahola LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tehtava_1_ja_2_tomiahola main.cpp)

include(GNUInstallDirs)
install(TARGETS tehtava_1_ja_2_tomiahola
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
