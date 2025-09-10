class Car
{
    public void gear(int x)
    {
        System.out.println("Car has a simple gear.");
    }
}
class SportCar extends Car
{
    public void gear(int x)
    {
    System.out.println("Sports Car has a heavy gear.");     // Child class override to parent class 
    }
}
public class Overriding {
    public static void main(String args[])
    {
        SportCar obj = new SportCar();
        obj.gear(5);
    }
    
}
