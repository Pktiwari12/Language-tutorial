
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
public class JoinAndIsAlive {
    public static void main(String[] args) {
    NewThread t1 = new NewThread("Thread 1");
    NewThread t2 = new NewThread("Thread 2");
    NewThread t3 = new NewThread("Thread 3");
    System.out.println(t1.name+"is alive: "+t1.th.isAlive());
    System.out.println(t3.name+"is alive: "+t2.th.isAlive());
    System.out.println(t3.name+"is alive: "+t3.th.isAlive());
    try {
        t1.th.join();
        t2.th.join();
        t3.th.join();

    } catch (InterruptedException e) {
        // TODO: handle exception
        System.out.println("Main thread is interrupted ");
    }
    System.out.println(t1.name+"is alive: "+t1.th.isAlive());
    System.out.println(t3.name+"is alive: "+t2.th.isAlive());
    System.out.println(t3.name+"is alive: "+t3.th.isAlive());
    System.out.println("Main thread Existing.");
    }
}
