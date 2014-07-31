// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define _CRT_SECURE_NO_WARNINGS

#define LUA_WIN true

#define LUA_BUILD_AS_DLL true

#define LUA_CORE

#define LIB_SUFFIX

#define LIB_LUA_VER 52

#define LUA_PATHSEP ";"
#define LUA_PATH_MARK   "?"
#define LUA_EXECDIR     "!"
#define LUA_IGMARK      "-"

#define LUA_INTEGER     ptrdiff_t

#define LUA_PATH        "LUA_PATH"
#define LUA_CPATH       "LUA_CPATH"

#define LUA_REGISTRYINDEX       (-10000)
#define LUA_ENVIRONINDEX        (-10001)
#define LUA_GLOBALSINDEX        (-10002)

#define LUA_COMPAT_MODULE


#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>



// TODO: reference additional headers your program requires here
