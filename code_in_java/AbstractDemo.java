abstract class A{
    abstract void callme();
    void callmetoo(){
        System.out.println("This is a concrete method .");
    }
}
class B extends A{
    void callme(){
        System.out.println("B is implementation of  callme");
    }
}
public class AbstractDemo {
    public static void main(String[] args) {
        // A a = new A();
        // a.callmetoo();
        B b = new B();
        b.callme();
        b.callmetoo();
    }
    
}
