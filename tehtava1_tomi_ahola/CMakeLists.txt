cmake_minimum_required(VERSION 3.5)

project(tehtava1_tomi_ahola LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tehtava1_tomi_ahola main.cpp)

include(GNUInstallDirs)
install(TARGETS tehtava1_tomi_ahola
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
