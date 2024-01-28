#pragma once

#ifdef SR_PLATFORM_WINDOWS // if in windows os
	#ifdef SR_BUILD_DLL // if we are in the dll and now another application
		#define STINGRAY_API __declspec(dllexport) // should be active for our dll
	#else
		#define STINGRAY_API __declspec(dllimport) // should be active for our exe(s)
	#endif
#else
	#error Stingray Only Supports Windows Operating Systems
#endif