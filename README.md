# Java-C++ JNI Integration Example

This project demonstrates how to integrate Java and C++ code using JNI (Java Native Interface). The example includes a simple C++ class that can be called from a Java application.

## Project Structure


## Prerequisites

- **Java Development Kit (JDK)**: Ensure that you have JDK installed.
- **C++ Compiler**: You need a C++ compiler like `g++` for Linux or MinGW for Windows.
- **Make** (optional): For convenience, a `Makefile` is provided.

## Building the Project

### 1. Compile the Java Class and Generate JNI Header

```sh
javac src/MyClass.java
javah -jni MyClass
```
This will generate MyClass.h in the project root directory.

2. Compile the C++ Code
For Linux:
```sh
g++ -shared -o build/libMyClassNative.so -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux cpp/MyClass.cpp
```
For Windows:
```sh
g++ -shared -o build/MyClassNative.dll -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" cpp/MyClass.cpp
```
Explanation
C++ Code
MyClass.h: Declares the JNI functions.
MyClass.cpp: Implements the JNI functions and the MyClassImpl class that performs the actual work.
Java Code
MyClass.java: Defines native methods and uses them to interact with the C++ code.
Cleanup
To clean up the build artifacts, you can use the following command if you have a Makefile set up:
```sh
make clean
```
Troubleshooting
Ensure that JAVA_HOME is set correctly.
Make sure the lib or dll file is accessible in the library path.
License
This project is licensed under the MIT License - see the LICENSE file for details.

Acknowledgements
JNI documentation and resources.
Open-source C++ and Java tools.


### Notes

- **Makefile**: If you want to automate the build process, you can create a `Makefile` to handle compilation and cleanup. The above `README.md` assumes a `Makefile` for cleanup, but it can be omitted if you're not using one.
- **LICENSE**: You should add a `LICENSE` file if you choose to include licensing information. The example uses the MIT License, but you should adjust it based on your needs.

Feel free to adjust the paths, names, and commands based on your specific setup and operating system.
