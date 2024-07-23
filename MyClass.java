public class MyClass {
    static {
        System.loadLibrary("MyClassNative");
    }

    private native void nativeInit();
    private native void nativePrintMessage();
    private native void nativeDestroy();

    public void init() {
        nativeInit();
    }

    public void printMessage() {
        nativePrintMessage();
    }

    public void destroy() {
        nativeDestroy();
    }

    public static void main(String[] args) {
        MyClass myClass = new MyClass();
        myClass.init();
        myClass.printMessage();
        myClass.destroy();
    }
}
public class MyClass {
    static {
        System.loadLibrary("MyClassNative");
    }

    private native void nativeInit();
    private native void nativePrintMessage();
    private native void nativeDestroy();

    public void init() {
        nativeInit();
    }

    public void printMessage() {
        nativePrintMessage();
    }

    public void destroy() {
        nativeDestroy();
    }

    public static void main(String[] args) {
        MyClass myClass = new MyClass();
        myClass.init();
        myClass.printMessage();
        myClass.destroy();
    }
}
