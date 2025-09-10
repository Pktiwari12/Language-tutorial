public class ExceptionHandling {
    public static void main(String args[])
    {
        int d,a;
        try{//monitor a block of code
        d =0;
        a=42/d;
     }
     catch(ArithmeticException e)
     {
        // catch divide -by-zero error
        System.out.println("Division by zero");
     }
     finally{
        System.out.println("I am in in finally block.");
     }
    }
    
}
