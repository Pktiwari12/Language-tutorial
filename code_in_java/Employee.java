package pack;
public class Employee 
{
    private void  emppri()
    {
        System.out.println("Defined private in employee.");

    }
    public void  emppub()
    {
        System.out.println("Defined public in employee.");
    }
    protected void emppro()
    {
        System.out.println("Defined protected in employee.");
    }
    void empdef()
    {
        System.out.println("Defined default in employee.");
    }
    public static void main(String args[])
    {
        Employee obj = new Employee();
        obj.emppri();
        obj.empdef();
        obj.emppub();
        obj.emppro();
    }
}    

