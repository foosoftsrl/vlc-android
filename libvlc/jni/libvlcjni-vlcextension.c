#include <jni.h>

extern int AndroidGetFrameCtr();

JNIEXPORT jlong JNICALL Java_it_foosoft_vlc_VlcExtension_videoFrameCount(JNIEnv * env, jclass clazz) {
    return AndroidGetFrameCtr();
}

