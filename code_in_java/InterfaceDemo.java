interface Vehicle{
    void changeGear(int a);
     void speedUp(int a);
    void applyBreak(int a);
    void printVehicleStatus();
}
class Car implements Vehicle{
    private int gear;
    private int speed=0;
    public void changeGear(int newgear)
    {
        gear = newgear;
    }
    public void refrenceNotCall()
{
    System.out.println("This can not be call by interface type reference; ");
}
    public void speedUp(int increment)  // When we implements the interface method . method must be public
    {
        speed = speed+increment;
    }
    public void applyBreak(int decrement)
    {
        speed = speed - decrement;
    }
    public void printVehicleStatus(){
        System.out.println("The speed of Car is  "+speed+"The gear is "+gear);
    }
}
class Bike implements Vehicle{
    int gear, speed=0;
    public void changeGear(int newgear)
{
    gear = newgear;
}
public void speedUp(int increment)
{
    speed+= increment;
}
public void applyBreak(int decrement)
{
    speed-=decrement;
}
public void refrenceNotCall()
{
    System.out.println("This can not be call by interface type reference; ");
}
public void printVehicleStatus()
{
    System.out.println("The Bike in "+gear+"with the speed of "+speed);
}
}
public class InterfaceDemo {
    public static void main(String args[])
    {
        Car c1 = new Car();
        c1.changeGear(2);
        c1.speedUp(56);
        c1.printVehicleStatus();
        c1.applyBreak(5);
        c1.refrenceNotCall();
        System.out.println("Speed after applying break");
        c1.printVehicleStatus();
        Vehicle b1 = new Bike();
        //b1.refrenceNotCall()
        b1.changeGear(4);
        b1.speedUp(45);
        b1.printVehicleStatus();
        b1 = c1;
        b1.applyBreak(45);
        //b1.refrenceNotCall();
        b1.printVehicleStatus();
        

    }
    
}
