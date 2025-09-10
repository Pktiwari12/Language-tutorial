// First line Of Constructor must be this or super (by default super)
class A {
    public A()
    {
        System.out.println("A 1");
    }

}
class B extends A{
    public B()
    {
        this(4);                        // Here control goes to B 2
        //super();                          // Constructor never contains super() and this() both
        System.out.println("B 1");
        
        
    }
    public B(int k)                         // Here Default Constructor is Super
    {                                       // So first excute super Constructer after that B2 and then B1
        System.out.println("B 2");
    }
}
public class ConstructerChainig {
    public static void main(String args[])
    {
        B obj = new B();        //      this invoke Constructor B1 
    }
    
}
