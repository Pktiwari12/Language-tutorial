// program to generate random numbers using math class
public class RandomNumbersUsingMathClass {
    public static void main(String args []){
        // by default random method return double type random number
        System.out.println("the first random number :-\t"+Math.random());
        System.out.println("the first random number :-\t"+Math.random());
        System.out.println("the first random number :-\t"+Math.random());
        System.out.println("the first random number :-\t"+Math.random());
        // after type casing the integer value to int
        System.out.println("the first random number :-\t"+(int)Math.random());
        System.out.println("the first random number :-\t"+(int)Math.random());

        // random number creating between max and min value
        int max = 400;
        int min = 500;
        System.out.println("The random number between the range :- "+(Math.random()*(max - min +1)+min));
        // After type casting
        int a = (int)Math.random()*(max - min +1)+min;
        System.out.println(a);

    }
}
