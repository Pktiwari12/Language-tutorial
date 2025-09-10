// t1.join() method suspend the thread from where is joined called untill the thread t1 is 
// not completed.
class MyThread1 extends Thread{
    public void run(){
        int i;
        for(i = 1 ;i<=5 ;i++){
            System.out.println(i+" "+Thread.currentThread().getName()+"MyThread1");
        }

    }
}
class MyThread2 extends Thread{
    public void run(){
        MyThread1 t1 = new MyThread1();
        t1.start();
        try{
        if(t1.isAlive()){
            t1.join();
        }
    }catch(InterruptedException e){
        System.out.println(""+e.getMessage());
    }  
        int i;
        for(i = 1; i<=5 ;i++){
            System.out.println(i+" "+Thread.currentThread().getName()+"MyThread2");
        }
    }
}
public class JoinDemo {
    public static void main(String[] args) throws InterruptedException {
        // Thread1 t1 = new Thread1();
        MyThread2 t2 = new MyThread2();
        // t1.start();
        // if(t1.isAlive()){
        //     t1.join();
        // }
        t2.start();
        if(t2.isAlive()){
            t2.join();
        }
        
        int i;
        for(i = 1; i<=5 ;i++){
            System.out.println(i+" "+Thread.currentThread().getName());
        }
        
    }
    
}
