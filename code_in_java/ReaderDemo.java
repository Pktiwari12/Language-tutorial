import java.io.*;
public class ReaderDemo {
    public static void main(String args [])throws IOException{
        Reader reader = new FileReader("for_file_handling1.txt");
        int data = reader.read();
        while(data != -1){
            System.out.print(((char)data));
            data  = reader.read();
        }
        reader.close();

    }
    
}
