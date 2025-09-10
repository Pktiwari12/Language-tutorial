public class Varargs {
    public static void varargs(int...b,String...a)
    {
        System.out.println("The numer of arguments "+a.length+"length of b   "+b.length);
    
        for(String s:a)
        {
            System.out.print(s+"");
            System.out.println();
        }
        for(int i:b)
        {
            System.out.print(i+"");
            System.out.println();
        }
    }    
    public static void main(String args[])
    {
        varargs();
        varargs(5);
        varargs("Ravi","Pradeep","Devanshu","Sachin",5,6,34,5,3,3,5,6);


    }
    
}
