#pragma once

#ifdef MZ_PLATFORM_WINDOWS
	#ifdef MZ_BUILD_API
	#define MACOS_API _declspec(dllexport)
	#else 
	#define MACOS_API _declspec(dllimport)
  #endif
#else
#error	MACOS only support windows
#endif