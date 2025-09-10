class NewThread implements Runnable{
    Thread th;      // creating the Thread class Referennce
    String name;
    NewThread(String name)
    {
        this.name = name;
        th = new Thread(this,name);
        System.out.println("New Thread : "+th);
        th.start();
    }
    // this is the entry point to thread
    public void run(){
        try{
            for(int i=5;i>=0 ;i--)
            {
                System.out.println(name+":  "+i);
            }
            Thread.sleep(1000);
        }catch(InterruptedException e)
        {
            System.out.println(name+" : Interrupted");
        }
        System.out.println(name+": Existing");
    }
}
public class MultipleThread {
    public static void main(String[] args) {
    NewThread t1 = new NewThread("Thread 1");
    NewThread t2 = new NewThread("Thread 2");
    NewThread t3 = new NewThread("Thread 3");
    try {
        Thread.sleep(10000);
    } catch (InterruptedException e) {
        // TODO: handle exception
        System.out.println("Main thread is interrupted ");
    }
    System.out.println("Main thread Existing.");
    }
}
