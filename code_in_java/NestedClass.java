class Outer{
    int outer_x = 100;
    void test(){
        Inner inner = new Inner();
        inner.display();
        inner.hello();
    }
    class Inner{
        void display(){
            System.out.println("Display: outer_x="+outer_x);
        }
        static void hello()
        {
            System.out.println("Hello");
        }
    }
}
public class NestedClass {
    public static void main(String args[])
    {
        Outer outer = new Outer();
        outer.test();
    }
    
}
