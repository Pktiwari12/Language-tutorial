import java.util.Scanner;
public class ExceptionHandlingDemo
{
    public static void main(String args[])
    {
        int x,y;
       // String s = null;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        y = sc.nextInt();
        System.out.println("First line");
        try{
            System.out.println(" "+x/y);
            System.out.println("in try");
        }
        catch(ArithmeticException e )
        {
            //e.printStackTrace();      // only void method that print message like default catch print
            //System.out.println();
           String s2 = e.getMessage();          // getMessage() return a string 
           System.out.println(s2);
           
        }
        
        System.out.println("End line");
       // System.out.println(""+s.length());


    }
}