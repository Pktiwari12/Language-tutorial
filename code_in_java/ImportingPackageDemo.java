// import packagedemo.DefaultCheck;
import packagedemo.AdditionForPackageDemo;
public class ImportingPackageDemo {
    public static void main(String[] args) {
        AdditionForPackageDemo obj = new AdditionForPackageDemo();
        System.out.println("sum "+obj.add(3,4));
        // DefaultCheck d = new DefaultCheck();
        // System.out.println("multiplication is "+d.multiply(4, 5));
    }
}
