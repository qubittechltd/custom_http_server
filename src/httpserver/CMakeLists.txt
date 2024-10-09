# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

# Generated from httpserver.pro.

#####################################################################
## HttpServer Module:
#####################################################################

qt_internal_add_module(HttpServer
    SOURCES
        qabstracthttpserver.cpp qabstracthttpserver.h qabstracthttpserver_p.h
        qhttpserver.cpp qhttpserver.h qhttpserver_p.h
        qhttpserverliterals.cpp qhttpserverliterals_p.h
        qhttpserverrequest.cpp qhttpserverrequest.h qhttpserverrequest_p.h
        qhttpserverresponder.cpp qhttpserverresponder.h qhttpserverresponder_p.h
        qhttpserverresponse.cpp qhttpserverresponse.h qhttpserverresponse_p.h
        qhttpserverrouter.cpp qhttpserverrouter.h qhttpserverrouter_p.h
        qhttpserverrouterrule.cpp qhttpserverrouterrule.h qhttpserverrouterrule_p.h
        qhttpserverrouterviewtraits.h
        qhttpserverstream.cpp qhttpserverstream_p.h
        qhttpserverviewtraits.h
        qhttpserverviewtraits_impl.h
        qthttpserverglobal.h
    LIBRARIES
        Qt::CorePrivate
        Qt::NetworkPrivate
    PUBLIC_LIBRARIES
        Qt::Core
        Qt::Network
    PRIVATE_MODULE_INTERFACE
        Qt::CorePrivate
        Qt::NetworkPrivate
    GENERATE_CPP_EXPORTS
)

## Scopes:
#####################################################################

qt_internal_extend_target(HttpServer CONDITION TARGET Qt::WebSockets
    LIBRARIES
        Qt::WebSocketsPrivate
    PUBLIC_LIBRARIES
        Qt::WebSockets
    PRIVATE_MODULE_INTERFACE
        Qt::WebSocketsPrivate
)

qt_internal_add_docs(HttpServer
                     ../../doc/config/qthttpserver.qdocconf
)




# cmake_minimum_required(VERSION 3.16)
# project(HttpServer VERSION 1.0 LANGUAGES CXX)

# find_package(Qt6 REQUIRED COMPONENTS Core Network WebSockets)

# # Set up the module
# add_library(HttpServer
#     qabstracthttpserver.cpp
#     qhttpserver.cpp
#     qhttpserverliterals.cpp
#     qhttpserverrequest.cpp
#     qhttpserverresponder.cpp
#     qhttpserverresponse.cpp
#     qhttpserverrouter.cpp
#     qhttpserverrouterrule.cpp
#     qhttpserverstream.cpp
# )

# target_sources(HttpServer PUBLIC
#     qabstracthttpserver.h
#     qabstracthttpserver_p.h
#     qhttpserver.h
#     qhttpserver_p.h
#     qhttpserverliterals_p.h
#     qhttpserverrequest.h
#     qhttpserverrequest_p.h
#     qhttpserverresponder.h
#     qhttpserverresponder_p.h
#     qhttpserverresponse.h
#     qhttpserverresponse_p.h
#     qhttpserverrouter.h
#     qhttpserverrouter_p.h
#     qhttpserverrouterrule.h
#     qhttpserverrouterrule_p.h
#     qhttpserverrouterviewtraits.h
#     qhttpserverstream_p.h
#     qhttpserverviewtraits.h
#     qhttpserverviewtraits_impl.h
#     qthttpserverglobal.h
# )

# # Set properties
# set_target_properties(HttpServer PROPERTIES
#     AUTOMOC ON
#     CXX_STANDARD 17
#     CXX_STANDARD_REQUIRED ON
# )

# # Link with Qt libraries
# target_link_libraries(HttpServer
#     PUBLIC
#         Qt::Core
#         Qt::Network
#         Qt::WebSockets
#     PRIVATE
#         Qt::CorePrivate
#         Qt::NetworkPrivate
#         Qt::WebSocketsPrivate
# )

# # Include directories
# target_include_directories(HttpServer
#     PUBLIC
#         ${CMAKE_CURRENT_SOURCE_DIR}
#     PUBLIC
#         ${CMAKE_CURRENT_BINARY_DIR}
#         ${CMAKE_CURRENT_SOURCE_DIR}
# )

# # Install rules
# include(GNUInstallDirs)
# install(TARGETS HttpServer
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )


# cmake_minimum_required(VERSION 3.16)
# project(HttpServer VERSION 1.0 LANGUAGES CXX)

# # Find the required Qt components
# find_package(Qt6 REQUIRED COMPONENTS Core Network WebSockets)

# # Set up the HttpServer library
# add_library(HttpServer
#     qabstracthttpserver.cpp
#     qhttpserver.cpp
#     qhttpserverliterals.cpp
#     qhttpserverrequest.cpp
#     qhttpserverresponder.cpp
#     qhttpserverresponse.cpp
#     qhttpserverrouter.cpp
#     qhttpserverrouterrule.cpp
#     qhttpserverstream.cpp
# )

# # Specify the header files for the library
# target_sources(HttpServer PUBLIC
#     qabstracthttpserver.h
#     qabstracthttpserver_p.h
#     qhttpserver.h
#     qhttpserver_p.h
#     qhttpserverliterals_p.h
#     qhttpserverrequest.h
#     qhttpserverrequest_p.h
#     qhttpserverresponder.h
#     qhttpserverresponder_p.h
#     qhttpserverresponse.h
#     qhttpserverresponse_p.h
#     qhttpserverrouter.h
#     qhttpserverrouter_p.h
#     qhttpserverrouterrule.h
#     qhttpserverrouterrule_p.h
#     qhttpserverrouterviewtraits.h
#     qhttpserverstream_p.h
#     qhttpserverviewtraits.h
#     qhttpserverviewtraits_impl.h
#     qthttpserverglobal.h
# )

# # Set properties for the HttpServer target
# set_target_properties(HttpServer PROPERTIES
#     AUTOMOC ON          # Enable automatic MOC processing for Qt's meta-object compiler.
#     CXX_STANDARD 17     # Use C++17 standard.
#     CXX_STANDARD_REQUIRED ON # Ensure that C++17 is required.
# )

# # Link with the necessary Qt libraries
# target_link_libraries(HttpServer
#     PUBLIC
#         Qt::Core
#         Qt::Network
#         Qt::WebSockets
#     PRIVATE
#         Qt::CorePrivate
#         Qt::NetworkPrivate
#         Qt::WebSocketsPrivate
# )

# # Include directories for the HttpServer target
# target_include_directories(HttpServer
#     PUBLIC
#         ${CMAKE_CURRENT_SOURCE_DIR}
#         ${CMAKE_CURRENT_BINARY_DIR}
# )

# # Install rules for the HttpServer library
# include(GNUInstallDirs)
# install(TARGETS HttpServer
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )


