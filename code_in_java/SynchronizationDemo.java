import java.util.*;
class Account{
    private int ammount;
    Account(int ammount){
        this.ammount = ammount;
    }
    public void checkBalance(){
        System.out.println("The current total balance is :"+this.ammount);
    }
    public boolean isSufficient(int withdrawMoney){
        if(withdrawMoney<this.ammount){
            return true;
        }
        else{
            return false;
        }
    }
    // after withdrawing money
    public void availableBal(int withdrawMoney){
        this.ammount = this.ammount - withdrawMoney;
        System.out.println("The available balance is :"+this.ammount);

    }
    public void withdraw(int withdrawMoney){
        if(isSufficient(withdrawMoney)){
            System.out.println("Transaction is Successful.");
            this.availableBal(withdrawMoney);

        }
        else{
            System.out.println("Account has no sufficient Balance .");
            this.checkBalance();
        }
    }

}
class Customer implements Runnable{
    private String name;
    private Account ac;
    public Customer(String name , Account ac){
        this.name = name;
        this.ac = ac;
    }
    // Customer class method
    private int withdrawMoney;
    public void insertWithdrawlMoney(){
        System.out.println("for:"+this.name);
        Scanner sc = new Scanner(System.in);
        this.withdrawMoney = sc.nextInt();
        
    }
    public void run(){
        synchronized(ac/* shared shorce*/){
            // shared variable or shared method
        System.out.println("for:"+this.name);
        ac.withdraw(withdrawMoney);
        }
    }


}
public class SynchronizationDemo {
    public static void main(String[] args) throws Throwable{
        // customer as a theread
        Account ac = new Account(10000);
        // Two customers is created
        Customer veer = new Customer("Veer",ac);
        Customer pradeep = new Customer("Pradeep" ,ac);
        Thread t1 = new Thread(veer);
        Thread t2 = new Thread(pradeep);
        // Taking user input withdrawl monery
        veer.insertWithdrawlMoney();
        pradeep.insertWithdrawlMoney();
        t1.start();
        // t1.setPriority(10);
        t2.start();
    }
}
