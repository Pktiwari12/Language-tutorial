// Program to use thread by Extending the thread class
class A extends Thread{
    // override the run method to attach my code to thread
    public void run()
    {
        for(int i =1;i<=10;i++)
        {
            System.out.println("Thread A :"+i);
        }
    }
}
class B extends Thread{
    public void run()
    {
        for(int i =1;i<=10;i++)
        {
            System.out.println("Thread B :"+i);
        }
    }
}
public class ThreadIntroduction2 {
    public static void main(String[] args) {
    // by creating the class A object . we access  
        A o1 = new A();
        B o2 = new B();
        // to execute the thread
        o1.start();
        o1.setPriority(10);
        o2.start();
        System.out.println(""+o1.getPriority());
    
    }
    
}
