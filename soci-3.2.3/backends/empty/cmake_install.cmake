# Install script for directory: /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/soci/empty" TYPE FILE FILES "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/soci-empty.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_empty.so.3.2.3"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_empty.so.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_empty.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/lib/libsoci_empty.so.3.2.3"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/lib/libsoci_empty.so.3.2"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/lib/libsoci_empty.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_empty.so.3.2.3"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_empty.so.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_empty.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE STATIC_LIBRARY FILES "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/lib/libsoci_empty.a")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test/cmake_install.cmake")

endif()

