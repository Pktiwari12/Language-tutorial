import java.io.*;
import java.net.*;
import java.util.*;
public class MyServer {
    public static void main(String args[])
    {
        if(args.length<1){return;}
        int port = Integer.parseInt(args[0]);
        try(ServerSocket serverSocket = new ServerSocket(port)){
            System.out.println("Server is listning on port  : "+port);
            while(true){
                Socket socket = serverSocket.accept();
                System.out.println("New Clinet Connected.");
                OutputStream output = socket.getOutputStream();
                PrintWriter writer = new PrintWriter(output,true);
                writer.println(new Date().toString());
                // I am confused why write socet
                InputStream input = socket.getInputStream();
                BufferedReader reader = new BufferedReader(new InputStreamReader(input));
                String clnt_name = reader.readLine();
                System.out.println(clnt_name);
                String clnt_password = reader.readLine();
                System.out.println(clnt_password);
            }

        }catch(IOException ex){
            System.out.println("Server exceptiion : "+ex.getMessage());
            ex.printStackTrace();
        }
    }
    
}
