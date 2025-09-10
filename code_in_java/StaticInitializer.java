class Test{
    private static int x;
    static
    {
        System.out.println("in Static Initializer : x ="+x);
        x =5;
    } 
    public Test()
    {
        System.out.println("In Constructer : x = "+x);
    }

}
public class StaticInitializer {
   /* private  int x;
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
        // Test obj = new Test();
        // Test obj1 = new Test();
         new Test();
         
    }
}
