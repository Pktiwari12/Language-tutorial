// Program to understand the our throw and default catch
import java.util.*;
public class Exception_handling3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x,y;
        System.out.println("Enter the value of x and y:");
        x = sc.nextInt();
        y = sc.nextInt();
        // we  know here only occur Arithmetic Exception
        throw new ArithmeticException("You entered 0");
    }
    
}
