// Program to Introduction the thread using the runnable interface
class A implements Runnable{
    public void run()       // override the run method of interface 
    {                       // and it would be defined by us 
        for(int i=0;i<=10;i++)
        System.out.println("In Thread A"+i);
    }
}
class B implements Runnable{
    public void run()               // same as class A
    {
        for(int i=0;i<=10;i++)
        System.out.println("In Thread B"+i);
    }
}
public class ThreadIntroduction {
        public static void main(String[] args) {
            // Runnable r1 = new A() // is valid by object reference r1, we access only run method
            // We pass object of class A as parameter but  Throw constructor recieve it in Runnable referance variable
            // so t1 can access only run method 
            Thread t1 = new Thread(new A());
            Thread t2 = new Thread(new B());
            // to start execution of thread 
            t1.start();
            t2.start();
        }
    
}


/*This program is running both threads independently. That's why both threads are running 
simultaneously. First, some time is given to the first thread by operating system, 
then some to the second thread, and again back to the first thread. 
   
This continues until the run method is not 
    completed, or usually until the program is not completed, or no uncaught exception is
    thrown.
 */
