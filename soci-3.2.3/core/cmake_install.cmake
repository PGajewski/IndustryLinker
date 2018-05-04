# Install script for directory: /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/soci" TYPE FILE FILES
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/rowset.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/soci-platform.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/type-conversion.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/row.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/soci_backends_config.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/version.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/values.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/soci.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/session.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/use-type.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/ref-counted-prepare-info.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/type-ptr.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/type-holder.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/bind-values.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/row-exchange.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/soci-config.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/values-exchange.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/use.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/statement.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/boost-optional.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/blob.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/soci-backend.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/blob-exchange.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/type-conversion-traits.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/into-type.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/connection-pool.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/rowid.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/procedure.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/soci-simple.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/boost-fusion.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/boost-gregorian-date.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/query_transformation.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/backend-loader.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/boost-tuple.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/exchange-traits.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/error.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/transaction.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/rowid-exchange.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/prepare-temp-type.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/connection-parameters.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/once-temp-type.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/into.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/ref-counted-statement.h"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/core/unsigned-types.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_core.so.3.2.3"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_core.so.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_core.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/lib/libsoci_core.so.3.2.3"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/lib/libsoci_core.so.3.2"
    "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/lib/libsoci_core.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_core.so.3.2.3"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_core.so.3.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsoci_core.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE STATIC_LIBRARY FILES "/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/lib/libsoci_core.a")
endif()

