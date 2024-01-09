cmake_minimum_required(VERSION 3.5)

project(githubupload1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(githubupload1 main.cpp)

include(GNUInstallDirs)
install(TARGETS githubupload1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
