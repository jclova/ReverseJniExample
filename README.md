# ReverseJniExample
Example of Reverse JNI call (from C -> Java)

From the Android Studio, this is an example of how to call from the native to Java methods.

The basic idea is to pass JNIEnv, jclass, and jobject information from the Java-side first.
Then, the native can use them to call back public methods in the Java-side.
```
    // Call JNI (JAVA -> C) : Set environments to call back Java methods
    public native void nativeSetEnv();
    
```
