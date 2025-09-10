class A{
    private int x=8 d;
    public A(){
        System.out.println("The Constructor of A :"+x);
    }
    {
        x = 5;
        System.out.println("I am in Initialize block.");
    }
}
public class InitializationBlock {
    public static void main(String[] args) {
        A a = new A();
    }

}
