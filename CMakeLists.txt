# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

# Generated from qthttpserver.pro.

cmake_minimum_required(VERSION 3.16)

include(.cmake.conf)
project(CustomHttpServer
    VERSION "${QT_REPO_MODULE_VERSION}"
    DESCRIPTION "Qt HTTP Server"
    HOMEPAGE_URL "https://qt.io/"
    LANGUAGES CXX C
)

find_package(Qt6 CONFIG REQUIRED COMPONENTS BuildInternals Core Network)
find_package(Qt6 CONFIG OPTIONAL_COMPONENTS Concurrent WebSockets Gui)
qt_internal_project_setup()

qt_internal_add_module(HttpServer
    SOURCES
        qabstracthttpserver.cpp
        qabstracthttpserver.h
        qabstracthttpserver_p.h
        qhttpserver.cpp
        qhttpserver.h
        qhttpserver_p.h
        qhttpserverliterals.cpp
        qhttpserverliterals_p.h
        qhttpserverrequest.cpp
        qhttpserverrequest.h
        qhttpserverrequest_p.h
        qhttpserverresponder.cpp
        qhttpserverresponder.h
        qhttpserverresponder_p.h
        qhttpserverresponse.cpp
        qhttpserverresponse.h
        qhttpserverresponse_p.h
        qhttpserverrouter.cpp
        qhttpserverrouter.h
        qhttpserverrouter_p.h
        qhttpserverrouterrule.cpp
        qhttpserverrouterrule.h
        qhttpserverrouterrule_p.h
        qhttpserverrouterviewtraits.h
        qhttpserverstream.cpp
        qhttpserverstream_p.h
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
)
