
#include <jni.h>
#include "MainJNI.h"


#define CLASS_NAME  "com/joshuapark/reversejniexample/MainActivity"


JNIEnv *g_env;
jclass g_clazz;
jobject g_object;


extern "C" {


	void CallJavaMethod( )
	{
        jmethodID methodId = g_env->GetMethodID(g_clazz, "callFromNative", "()V");
        g_env->CallVoidMethod(g_object, methodId);
	}


	JNIEXPORT void JNICALL Java_com_joshuapark_reversejniexample_MainActivity_nativeSetEnv( JNIEnv* env, jobject thiz )
	{
        g_env = env; // Save JNIEnv
        g_object = thiz;

        jclass classTemp = env->FindClass("com/joshuapark/reversejniexample/MainActivity");
        g_clazz = (jclass) g_env->NewGlobalRef(classTemp);

        CallJavaMethod(); // C -> Java call test
	}



} // extern "C"
