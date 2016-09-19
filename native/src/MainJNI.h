#include <jni.h>
#include <android/log.h>

#define	LOG_ERROR(args...)	__android_log_print(ANDROID_LOG_ERROR, "ReverseJNI" , ## args)


extern "C" {


	JNIEXPORT void JNICALL Java_com_joshuapark_reversejniexample_MainActivity_nativeSetEnv( JNIEnv* env, jobject thiz );

} // extern "C"
