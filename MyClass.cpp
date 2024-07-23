
#include <iostream>
#include "MyClass.h"

class MyClassImpl {
public:
    void printMessage() {
        std::cout << "Даров лысый" << std::endl;
    }
};

// Храним экземплярчик для дрочки
static MyClassImpl* instance = nullptr;

extern "C" {

// Инитаем хуету
JNIEXPORT void JNICALL Java_MyClass_nativeInit(JNIEnv *env, jobject obj) {
    if (instance == nullptr) {
        instance = new MyClassImpl();
    }
}

// Печает всю эту ебаную помойку
JNIEXPORT void JNICALL Java_MyClass_nativePrintMessage(JNIEnv *env, jobject obj) {
    if (instance) {
        instance->printMessage();
    }
}

JNIEXPORT void JNICALL Java_MyClass_nativeDestroy(JNIEnv *env, jobject obj) {
    if (instance) {
        delete instance;
        instance = nullptr;
    }
}

}
