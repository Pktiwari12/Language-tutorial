// program to implement the custom exception
import java.util.Scanner;
// My exception class have to be derived class of Exception class
// by completing this task,custom exception is completed
class MyException extends Exception{
    // Passing the string to constructer of MyException
    public MyException(String s)
    {
        super(s);       // pass the string to Exception class constructer
    }
}
public class MyCustomException {
    public static void main(String[] args) {
        System.out.println("Welcome to custom exception.");
        int a;
        System.out.println("Enter positive number.if you enterd any negative. then it create my custom exception.");
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        // deal with exception by our throw and our catch
        try {
            if(a<0)
            {
                throw new MyException("Exception due to negative integer.");
            }
            else{
                System.out.println("the enntered positive integer is: "+a);
            }
        } catch (Exception e) {
            // TODO: handle exception
            System.out.println(""+e.getMessage());
        }
        // finally always execute
        finally{
            System.out.println("Program end");
        }
    }
}
