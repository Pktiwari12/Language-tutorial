interface X{
    public void fun(int x);
}
interface W{
    public void fun(int x , int y);
}
class SecondE implements X , W {
    public void funt(int x){
        System.out.println("hi");

    }
    public void fun(int x , int y){
        System.out.println("hello");
    }
    public static void main(String args[]){
        SecondE obj = new SecondE();
        obj.fun(5);
        obj.fun(5,4);
    }



    
}
