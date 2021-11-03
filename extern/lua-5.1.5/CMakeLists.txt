#Lua5.1.5
set(LUA51_SOURCE_FILES
	src/lapi.c
	src/lauxlib.c
	src/lbaselib.c
	src/lcode.c
	src/ldblib.c
	src/ldebug.c
	src/ldo.c
	src/ldump.c
	src/lfunc.c
	src/lgc.c
	src/linit.c
	src/liolib.c
	src/llex.c
	src/lmathlib.c
	src/lmem.c
	src/loadlib.c
	src/lobject.c
	src/lopcodes.c
	src/loslib.c
	src/lparser.c
	src/lstate.c
	src/lstring.c
	src/lstrlib.c
	src/ltable.c
	src/ltablib.c
	src/ltm.c
	src/lundump.c
	src/lvm.c
	src/lzio.c
	src/print.c
)

set(LUA51_HEADER_FILES
	include/lapi.h
	include/lauxlib.h
	include/lcode.h
	include/ldebug.h
	include/ldo.h
	include/lfunc.h
	include/lgc.h
	include/llex.h
	include/llimits.h
	include/lmem.h
	include/lobject.h
	include/lopcodes.h
	include/lparser.h
	include/lstate.h
	include/lstring.h
	include/ltable.h
	include/ltm.h
	include/lua.h
	include/lua.hpp
	include/luaconf.h
	include/lualib.h
	include/lundump.h
	include/lvm.h
	include/lzio.h
)

if (LUA51_STATIC)
	add_library(lua51 STATIC ${LUA51_SOURCE_FILES} ${LUA51_HEADER_FILES})
else()
	if (WIN32)
		add_definitions(-DLUA_BUILD_AS_DLL)
	endif()
	add_library(lua51 SHARED ${LUA51_SOURCE_FILES} ${LUA51_HEADER_FILES})
endif()
target_include_directories(lua51 PUBLIC include)
