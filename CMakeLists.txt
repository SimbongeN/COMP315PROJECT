cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_PREFIX_PATH "C:\\Qt\\6.9.0\\mingw_64\\")
set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_SOURCE_DIR}/ui_widgets)

set(SOURCES
        window_one.cpp
        HeaderFiles/window_one.h
        ui_widgets/window_one.ui
        HeaderFiles/window_two.h
        ui_widgets/window_two.ui
        HeaderFiles/window_three.h
        ui_widgets/window_three.ui
        HeaderFiles/window_four.h
        ui_widgets/window_four.ui
        HeaderFiles/window_five.h
        ui_widgets/window_five.ui
        ui_widgets/window_zero.ui
        HeaderFiles/window_zero.h
        HeaderFiles/story_window.h
        ui_widgets/story_window.ui
        ui_widgets/rush_window.ui
        HeaderFiles/rush_window.h
        HeaderFiles/action_window.h
        ui_widgets/action_window.ui
        ui_widgets/review_window.ui
        HeaderFiles/review_window.h
        HeaderFiles/b_conclusion.h
        ui_widgets/b_conclusion.ui
        ui_widgets/conclusion.ui
        HeaderFiles/conclusion.h
        HeaderFiles/achievements.h
        ui_widgets/achievements.ui
)

find_package(Qt6 COMPONENTS
  Core
  Gui
  Widgets
  REQUIRED)

add_executable(
        untitled
        main.cpp
        headerFiles/Scenario.h
        Scenario.cpp
        Question.cpp
        headerFiles/Question.h
        headerFiles/ChapterOne.h
        ChapterOne.cpp
        window_one.cpp
        window_two.cpp
        window_three.cpp
        window_four.cpp
        window_five.cpp
        window_zero.cpp
        story_window.cpp
        rush_window.cpp
        action_window.cpp
        review_window.cpp
        b_conclusion.cpp
        conclusion.cpp
        achievements.cpp
        ${SOURCES}
)
target_link_libraries(untitled
  Qt::Core
  Qt::Gui
  Qt::Widgets
)

if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if(NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if(NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif()
    endif()
    if(EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif()
    foreach(QT_LIB Core Gui Widgets )
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt6${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach(QT_LIB)
endif()
