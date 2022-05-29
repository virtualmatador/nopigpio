cmake_minimum_required(VERSION 3.18)
enable_testing()
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(nopigpio VERSION 0.1.0)
set(library_name "pigpio")

add_subdirectory("src")
add_subdirectory("test")

include(GNUInstallDirs)
install(TARGETS ${library_name}
    EXPORT ${library_name}-config
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
install(DIRECTORY ${CMAKE_BINARY_DIR}/include/${library_name}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
