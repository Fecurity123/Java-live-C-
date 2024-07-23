
#ifndef MYCLASS_H
#define MYCLASS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <jni.h>

// Функции которые будут в Java
JNIEXPORT void JNICALL Java_MyClass_nativeInit(JNIEnv *env, jobject obj);
JNIEXPORT void JNICALL Java_MyClass_nativePrintMessage(JNIEnv *env, jobject obj);
JNIEXPORT void JNICALL Java_MyClass_nativeDestroy(JNIEnv *env, jobject obj);

#ifdef __cplusplus
}
#endif

#endif
