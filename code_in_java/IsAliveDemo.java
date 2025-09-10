// Simply IsAlive Method retruns true if Thread is Alived
// returns False if Thread is dead
class Thread1 extends Thread{
    public void run(){
        int i;
        for(i = 1 ;i<=5 ;i++){
            System.out.println(i+" "+this.currentThread().getName());
        }

    }
}
class Thread2 extends Thread{
    public void run(){
        int i;
        for(i = 1; i<=5 ;i++){
            System.out.println(i+" "+this.currentThread().getName());
        }
    }
}
public class IsAliveDemo {
    public static void main(String[] args) {
        Thread1 t1 = new Thread1();  
        System.out.println("The aliveness of "+t1.currentThread().getName()+" before invoking start method "+t1.isAlive());
        t1.start();
        System.out.println("The aliveness of "+t1.currentThread().getName()+" after invoking start method "+t1.isAlive());
        
        
        
    }
    
    
}
