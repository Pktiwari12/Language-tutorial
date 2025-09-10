import java.util.concurrent.ThreadLocalRandom;
public class UsingThreadRendomClass {
    public static void main(String[] args) {
        
    // we can not create object of ThereadLocalRandom class
    // ThreadLocalRandom random = new ThreadLocalRandom();
    // Random Interger Numbers
    int a = ThreadLocalRandom.current().nextInt();
    System.out.println(a);
    // Random Integer Numbers with Upper bound
    System.out.println(ThreadLocalRandom.current().nextInt(67));
     a = ThreadLocalRandom.current().nextInt(100,300);
     System.out.println(a);
     // generating the flating numbers
     float f = ThreadLocalRandom.current().nextFloat();
     System.out.println(f);
     f = ThreadLocalRandom.current().nextFloat(500);
     System.out.println(f);
     f = ThreadLocalRandom.current().nextFloat(600,900);
     System.out.println(f);
     
    }
}
