import java.util.Scanner;
public class UserInput {
public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the Integer value.");
    int n = sc.nextInt();
    System.out.println("Enter any float type value.");
    float f = sc.nextFloat();
    System.out.println("Enter any long type value");
    long l = sc.nextLong();
    System.out.println("Enter any byte type value.");
    byte b = sc.nextByte();
    System.out.println("Enter any one word string");
    String s = sc.next();
    System.out.println("Enter any string line");
    String sl = sc.nextLine();
    System.out.println(" the Integer value = "+n);
    System.out.println(" the float value = "+f);
    System.out.println(" the long value = "+l);
    System.out.println(" the byte value = "+b);
    System.out.println("the one word String is = "+s);
    System.out.println(" the line  String is = "+sl);





    
}

}
