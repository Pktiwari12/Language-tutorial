class Factorial
{
    double fact(int n)
    {
        double result;
        if(n == 1){
           return 1;
        }
        result = n*fact(n-1);
        return result;
    }
}
public class Recursion {
    public static void main(String args[])
    {
        Factorial f= new Factorial();
        System.out.println("Factorial of 3 is "+f.fact(3));
        System.out.println("Factorial of 3 is "+f.fact(4));
        System.out.println("Factorial of 3 is "+f.fact(5));
        System.out.println("Factorial of 10 is "+f.fact(10));
        System.out.println("Factorial of 20 is "+f.fact(20));
    }
    
}
