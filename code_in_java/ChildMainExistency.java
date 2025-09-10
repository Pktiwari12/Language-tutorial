// Our programs contain a main thread. this thread is parent thread of all thread
// creating new thread
class NewThread implements Runnable{
    Thread th;
    NewThread()
    {
        // creating the object of Thread Class
        th = new Thread(this,"Demo thread and I create it NewThread.");
        // 'this' refers to a object of NewThread which is created in main Thread
        th.start();
    }
    public void run(){
        // default throw and our catch
        // b ut here problem arise that InterruptedException is a checked Exception so why 
        // we did not use throws keyword
        try{
            for(int i=5;i>=0;i--)
            {
                System.out.println("Child Thread:  "+i);
                Thread.sleep(250);
                
            }
        } catch(InterruptedException e){
            System.out.println("Child Interrupted");

        }
        System.out.println("Existing Child Thread");
    }
}    
    public class ChildMainExistency{
        public static void main(String[] args) {
            // in previous program,we create a thread object in main but in this time we create thread object in 
            // our thread which implements Runnable
            new NewThread();
            try{
                for(int i=5;i>=0;i--)
                {
                    System.out.println("Main Thread:  "+i);
                    Thread.sleep(1000);
                    
                }
            }catch(InterruptedException e){
                System.out.println("Main Thread  Interrupted");
    
            }
            System.out.println("Main thread is existing.");
            
        }
    }