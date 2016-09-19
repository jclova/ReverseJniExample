LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_CPP_FEATURES := rtti exceptions
LOCAL_MODULE    := reversejni
#LOCAL_CFLAGS    := -std=c++11 -Wall -Wfatal-errors -fexceptions
LOCAL_CFLAGS    := -std=c++11 -Wfatal-errors -fexceptions
#LOCAL_CFLAGS    += -UNDEBUG
#LOCAL_CFLAGS    += -DWATERMARK

LOCAL_SRC_FILES += $(LOCAL_PATH)/../src/MainJNI.cpp

LOCAL_LDLIBS    := -llog -landroid -lGLESv2 -lEGL
#Zlib
LOCAL_LDLIBS    += -lz

include $(BUILD_SHARED_LIBRARY)

