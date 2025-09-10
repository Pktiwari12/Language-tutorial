import java.net.*;
import java.util.Scanner;
import java.io.*;
public class MyClient{
    public static void main(String[] args) {
        if(args.length < 2){return;}
        String hostname = args[0];
        int port = Integer.parseInt(args[1]);
        try(Socket socket = new Socket(hostname  ,port)) {
            InputStream input = socket.getInputStream();
            BufferedReader reader = new BufferedReader(new InputStreamReader(input));
            String time = reader.readLine();
            System.out.println(time);
            // additional information adding
            System.out.println("Enter your name :");
            Scanner sc = new Scanner(System.in);
            String name = sc.nextLine();
            System.out.println("Enter your password :-");
            String password = sc.nextLine();
            OutputStream output = socket.getOutputStream();
            PrintWriter writer = new PrintWriter(output,true);
            writer.println(name);
            writer.println(password);


    

            
        } catch (UnknownHostException ex) {
            // TODO: handle exception
            System.out.println("Server not found "+ex.getMessage());
        }catch(IOException ex){
            System.out.println("I/O error : "+ex.getMessage());
        }
    }
}