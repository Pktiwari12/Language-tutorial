class ConstructerBox
{
    private int length , breadth , height;
    public ConstructerBox()
    {
        length = 2; breadth = 5; height =10;
    }
    public ConstructerBox(int l,int b, int h)
    {
        length = l; breadth = b; height = h;
    }
    public int getLength()
    {
        return(length);
    }
    public int getBreadth()
    {
        return breadth;
    }
    public int getHeight()
    {
        return height;
    }
    public static void main(String args[])
    {
        ConstructerBox obj = new ConstructerBox();
        ConstructerBox obj1 = new ConstructerBox(10,12,17);
        System.out.println("length =  "+obj.getLength()+"\tbreadth  "+obj.getBreadth()+"\theight =  "+obj.getHeight());
        System.out.println("length =  "+obj1.getLength()+"\tbreadth  "+obj1.getBreadth()+"\theight =  "+obj1.getHeight());
        
    }
}
/*public class Constructer{
    public static void main(String args[])
    {
        ConstructerBox obj = new ConstructerBox();
        ConstructerBox obj1 = new ConstructerBox(10,12,17);
        System.out.println("length =  "+obj.getLength()+"\tbreadth  "+obj.getBreadth()+"\theight =  "+obj.getHeight());
        System.out.println("length =  "+obj1.getLength()+"\tbreadth  "+obj1.getBreadth()+"\theight =  "+obj1.getHeight());
        
    }
}
*/