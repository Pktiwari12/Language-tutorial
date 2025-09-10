class A{
    public interface NestedIf{
        boolean isNotNegative(int x);
        
    }
}
class B implements A.NestedIf{
    public boolean isNotNegative(int x)
    {
        return x<0?false:true;
    }
}
public class NestedInterfaceDemo {
    public static void main(String args[]){
    A.NestedIf o1 = new B();
    if(o1.isNotNegative(12))
    {
        System.out.println("12 is not negative Integer.");
    }
    if(o1.isNotNegative(-4))
    {
        System.out.println("This not printed");     // fxn return the false so If block will not executed
    }
} 
}
