
add_library(sqlite3 STATIC src/sqlite3.c include/sqlite3.h)
target_include_directories(sqlite3 PUBLIC include)