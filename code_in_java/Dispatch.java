class A
{
    void callme()
    {
        System.out.println("inside A's call me method ");
    }


}
class B extends A
{
    void callme ()
    {
        System.out.println("Inside B's call me method");
    }
}
class C extends A{
    void callme()
    {
        System.out.println("Inside C's call me method .");
    }
}
public class Dispatch {
    public static void main(String[] args) {
        A a =  new A();
        B b = new B();
        
        C c =new C();
        A r;            // obtain referecnece of type A 
        r = a;          // refers to an A object
        r.callme(); 
        r = b;
        r.callme();
        r = c;
        r.callme();
    }
}
