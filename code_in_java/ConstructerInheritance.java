// Inheritance on Constructor
// Ist scenario - when explicitly no constructer made in sub and super class.Programm will execute
// normally Inheritance code is comes in Ist Scenario

// 2nd scenario - explicit in Super Class and implicit in sub class


/*class Parent{
    int a;
    public Parent()
    {
        System.out.println("I am in Constructer of Parents.");
    }

}
class Child extends Parent{
    {
    
        System.out.println("Constructer -explicit in Super Class and implicit in sub class");
    }
}
public class ConstructerInheritance {
    public static void main(String args[])
    {
        Child obj = new Child();
    }
    
}*/





// 3rd Scenario - explicit in sub Class and implicit in super class

class Parent{
    int a;
    

}
class Child extends Parent{
        public Child()
    {
        System.out.println("I am in Constructer of Child.");
    }
    {
    
        System.out.println("Constructer -explicit in Sub Class and implicit in supers class");
    }

}
public class ConstructerInheritance {
    public static void main(String args[])
    {
        Child obj = new Child();
    }
    
}
