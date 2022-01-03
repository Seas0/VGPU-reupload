


#include <stdio.h>
#ifdef ANDROID
#include <android/log.h>
#endif
//#define Printf(...) __android_log_print(ANDROID_LOG_INFO, "LIBGL", __VA_ARGS__)
#define Printf(...) printf(__VA_ARGS__)