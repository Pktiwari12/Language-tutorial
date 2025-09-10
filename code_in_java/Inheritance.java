public class Inheritance {
    public static void main(String args[])
    {
        InheritanceSportCar obj = new InheritanceSportCar();
        obj.setName("Lamborginni");
        obj.setSpeed(500.56f);
        obj.setPrice(5000000l);
        System.out.println("The name of sport car \t"+obj.getName());
        System.out.println("The speed  of sport car \t"+obj.getSpeed());
        System.out.println("The price of sport car \t"+obj.getPrice());
        
    }
    
}
