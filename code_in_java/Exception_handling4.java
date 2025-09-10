// Program to understand our throw and our catch
// most of times we use this scenario
import java.util.*;
public class Exception_handling4 {
    public static void main(String [] args)
    {
        int balance = 5000;
        int withdraw_amt;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the withdrawl amount:");
        withdraw_amt = sc.nextInt();
        try{
            if(withdraw_amt>balance){
                throw new ArithmeticException("Your account has not sufficient balance. ");
            }
            else if(withdraw_amt < 0){
                throw new ArithmeticException("You entered negative number that is not correct.");
            }
            else
            {
                balance = balance - withdraw_amt;
            }

        }catch(ArithmeticException e){
            System.out.println(""+e.getMessage());
        }
        finally{
            System.out.println("Thank you.");
        }


        System.out.println("the available balance is = "+balance);
        

    }
}
