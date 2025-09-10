// Only method static method inheritate not static variable
class Parent
{
    public static void f1()
    {
        System.out.println("Hello I am in Parent Class ");
    }
    public static void f2()
    {
        System.out.println("Hi, I am in Parent class.");
    }
    static int y = 5;
    int x = 6;
}
class Child extends Parent{
    public static void f2()
    {
        System.out.println("Hi , I am in Child class and finally hide the parent class f2");
    }
    // static {
        // y = 4;
    // }
    //x = 7;        // This line make error 
    int x = 7;
}

public class StaticInheritance {
    public static void main(String args[])
    {
        Child.f1();         // Here f1 is called by child class So f1 is inheritated
        Child.f2();         // Here same name and same signeture hide the super class function 
        System.out.println("y = "+Child.y);
        Child obj = new Child();
        System.out.println("x = "+ obj.x);
    }
    
}
