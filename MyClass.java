public class MyClass {
    // Загружаем поеботу которую компилили
    static {
        System.loadLibrary("MyClassNative");
    }

    // Обьявляем войну ебучей нативке ;3
    private native void nativeInit();
    private native void nativePrintMessage();
    private native void nativeDestroy();

    // Тут думую все пон?
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
