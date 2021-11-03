cmake_minimum_required(VERSION 3.10)
set(CMAKE_FIND_FRAMEWORK NEVER)

project(VerbSoup)

set(VERB_SOUP_SOURCE
	src/main.cpp
)

set(VERB_SOUP_HEADERS
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

if (BUILD_SHARED_LIBS)
	set(SFML_STATIC_LIBRARIES TRUE)
endif()


#_CRT_SECURE_NO_WARNINGS
add_definitions(-D_CRT_SECURE_NO_WARNINGS)

find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})
add_subdirectory(extern/lua-5.1.5)
add_subdirectory(extern/sqlite3)


IF (WIN32)
	add_executable(${PROJECT_NAME} WIN32 ${VERB_SOUP_SOURCE} ${VERB_SOUP_HEADERS})
ELSE()
	add_executable(${PROJECT_NAME} ${VERB_SOUP_SOURCE} ${VERB_SOUP_HEADERS})
ENDIF()

target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
target_link_libraries(${PROJECT_NAME} lua51)
target_link_libraries(${PROJECT_NAME} sqlite3)