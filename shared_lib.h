#ifndef SHARED_LIB__h
#define SHARED_LIB__h

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILD_MY_DLL
	#define SHARED_LIB __declspec(dllexport)
#else
	#define SHARED_LIB __declspec(dllimport)
#endif
	//
	void SHARED_LIB pipecommand(string strcmd);
#ifdef __cplusplus
	}
#endif

	void sum(int a, int b);

#endif