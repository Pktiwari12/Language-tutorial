import java.util.Scanner;
class Test{
    private int x;
    {
        System.out.println("in Instance Initializer : x ="+x);
        x =5;
    }
    public Test()
    {
        System.out.println("In Constructer : x = "+x);
    }

}
public class InstanceInitializer {
   /* private int x;
    {
        System.out.println("in Instance Initializer : x ="+x);
        x =5;
    }
    public  InstanceInitializer()
    {
        System.out.println("In Constructer : x = "+x);
    }*/

    public static void main(String args[])
    {
        
         Test obj = new Test();
         Test obj1 = new Test();
    }
}
