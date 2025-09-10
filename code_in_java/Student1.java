public class Student1
{
    static void school(){
        System.out.println("XYz");
    }
    protected void stupro(){
        System.out.println("Defined protected in student.");

    }
    public void stupub(){
        System.out.println("Defined public in Strident");
    }
    private void stupri(){
        System.out.println("Defined private in Student.");
    }
    void studef(){
        System.out.println("Defined default in Student.");

    }
    public static void main(String args[])
    {
        Student1 obj = new Student1();
        school();
        obj.stupro();
        obj.stupub();
        obj.studef();
        obj.stupri();
    }
}