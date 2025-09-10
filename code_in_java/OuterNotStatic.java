// We don't make outer class as Static 
 class Outer{
    
    public static void prnt()
    {
        System.out.println("hello");
    }
}
public class OuterNotStatic {
    public static void main(String[] args) {
        Outer.prnt();
    }
}
