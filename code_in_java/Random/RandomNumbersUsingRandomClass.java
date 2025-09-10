// Generate Random numbers Using Random Class
import java.util.Random;
public class RandomNumbersUsingRandomClass {
    public static void main(String[] args) {
        Random random = new Random();
        // Generate Integer Numbers with passing arguement Upper bound
        int a = random.nextInt(50);
        System.out.println("The random integer whose bound is 50 :-\t"+a);
        System.out.println("The random integer whose bound is 50 :-\t"+random.nextInt(50));
        // Generate Integer Numbers
        System.out.println("The random iteger number = "+random.nextInt());
        System.out.println("The random iteger number = "+random.nextInt());
        // Generating the floating numbers
        System.out.println("The random float value  ;-\t"+random.nextFloat());
        System.out.println("The random float value  ;-\t"+random.nextFloat());
        // Generating the double values
        System.out.println("The random double value  ;-\t"+random.nextDouble());
        System.out.println("The random double value  ;-\t"+random.nextDouble());
        // Generating the long numbers
        System.out.println("The random Long value  ;-\t"+random.nextLong());
        System.out.println("The random Long value  ;-\t"+random.nextLong());
        // Generating the Boolean value
        System.out.println("The random Boolean value  ;-\t"+random.nextBoolean());
        System.out.println("The random Boolean value  ;-\t"+random.nextBoolean());
        System.out.println("The random Boolean value  ;-\t"+random.nextBoolean());
    }
    
}
