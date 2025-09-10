// A program to demonstrate the overloading in java
class A{
    public void f1(int x)
    {
        System.out.println("In class A.");
        
 
    }
}
class B extends A{
    public void f1(int x ,int y)        // Same method but Signeture different
    {
        System.out.println("In class B.");
    }
}
public class Overloading {
    public static void main(String args[])
    {
        B obj1 = new B();
        obj1.f1(5);
        obj1.f1(2,4);
    }
    
}
