class Demo{
    static void f(){
        try{
            int i=0;
            int j = 10/i;

        }
        finally{
            System.out.println("inside f() finally");

        }
    }
        static void g(){
            try{
                int X[] = {10};
                X[1] = 1;
            }
            finally{
                System.out.println("inside g() finnaly");
            }
        }
        static void h(){
            try{
                System.out.println("Hello");
            }
            finally{
                System.out.println("Inside h() finally ");
            }
        }
        public static void main(String[] args) {
            try{
                f();
                g();
            }
            catch(Exception e){
                System.out.println("caught");
            }
            h();
        }
        
    
}
