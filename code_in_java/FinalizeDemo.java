public class FinalizeDemo {
    
    public static void main(String[] args) {
        FinalizeDemo obj = new FinalizeDemo();
        System.out.println(obj.hashCode());
        obj = null;
        System.gc();
    }
    protected void finalize() throws Throwable{
        System.out.println("finalize method is called .");
    }
    
}
