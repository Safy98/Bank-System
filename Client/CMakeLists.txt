cmake_minimum_required(VERSION 3.5)

project(TestClient VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Network)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(TestClient
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        client.h client.cpp
        windowmanager.h windowmanager.cpp

        login.h login.cpp login.ui




        accountcontroller.h accountcontroller.cpp
        tcpcontroller.h tcpcontroller.cpp

        requestvalidator.h requestvalidator.cpp
        admininterface.h admininterface.cpp admininterface.ui
        createuserwindow.h createuserwindow.cpp createuserwindow.ui
        agetaccountnumwindow.h agetaccountnumwindow.cpp agetaccountnumwindow.ui
        deleteuserwindow.h deleteuserwindow.cpp deleteuserwindow.ui
        updateuserwindow.h updateuserwindow.cpp updateuserwindow.ui
        userinterface.h userinterface.cpp userinterface.ui
        maketransaction.h maketransaction.cpp maketransaction.ui
        viewtranshistory.h viewtranshistory.cpp viewtranshistory.ui
        viewdb.h viewdb.cpp viewdb.ui
        getaccbalance.h getaccbalance.cpp getaccbalance.ui
        maketransfer.h maketransfer.cpp maketransfer.ui



    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET TestClient APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(TestClient SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(TestClient
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(TestClient PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Network)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.TestClient)
endif()
set_target_properties(TestClient PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS TestClient
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(TestClient)
endif()
