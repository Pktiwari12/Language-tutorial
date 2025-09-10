// Program to understand The default throw and our catch
import java.util.*;
public class Exception_handling2 {
    public static void main(String[] args)
    {
        int x,y;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the the value of x and y:");
        x = sc.nextInt();
        y = sc.nextInt();
        // If we create our catch ,then we define a try block
        try{
            System.out.println("The division of x and y = "+x/y);
            // if exception occur,would not print "i am in try"
            System.out.println("I am in try.");
        }catch(ArithmeticException e){
            System.out.println("you entered 0 for y :"+e.getMessage());
        }
        // we add "finally" to print the important message
        // finnaly always executed even if exception occur
        System.out.println("After Arithmetic Exception program continue.");
        // our avove print function would print because our catch is executed
        // if default catch is executed , then program will end




    }

    
}
