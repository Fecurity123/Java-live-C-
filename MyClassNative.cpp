#include "MyClassImpl.h"
#include "MyClass.h"
#include <jni.h>
#include <memory>

static std::unique_ptr<MyClassImpl> instance = nullptr;

extern "C" {

JNIEXPORT void JNICALL Java_MyClass_nativeInit(JNIEnv *env, jobject obj) {
    if (!instance) {
        instance = std::make_unique<MyClassImpl>();
    }
}

JNIEXPORT void JNICALL Java_MyClass_nativePrintMessage(JNIEnv *env, jobject obj) {
    if (instance) {
        instance->printMessage();
    }
}

JNIEXPORT void JNICALL Java_MyClass_nativeDestroy(JNIEnv *env, jobject obj) {
    instance.reset();
}

}
