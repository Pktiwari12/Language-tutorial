class A{
    public static void msg(){
        System.out.println("Message of A");
    }
}
class B extends A{
    public static void msg(){
        System.out.println("Message of B with parameter");
    }
}
public class StaticMethodInheritance {
    public static void main(String[] args) {
        
    A a = new A();
    B b = new B();
    b.msg();
    A c;
    c = a;
    c.msg();
    c = b;
    c.msg();
    
    }
}
