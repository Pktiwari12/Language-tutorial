import java.util.*;
import java.io.*;
public class WriterDemo {
    public static void main(String args[]) throws IOException{
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        Writer writer = new FileWriter("for_file_handling1.txt");
        writer.write(str);
        writer.close();
        System.out.println("Succesfully written in the file ");
    }
    
}
