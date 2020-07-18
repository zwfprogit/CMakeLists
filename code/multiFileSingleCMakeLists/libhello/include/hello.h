#ifndef __HELLO_H__
#define __HELLO_H__

#if defined _WIN32
	#if LIBHELLO_API
		#define LIBHELLO_API __declspec(dllexport)
	#else
		#define LIBHELLO_API __declspec(dllimport)
	#endif
#else 
#define LIBHELLO_API
#endif
LIBHELLO_API void hello(const char * fmt);

#endif

