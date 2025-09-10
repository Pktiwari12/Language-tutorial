import java.io.IOException;
import java.io.BufferedWriter;
import java.io.FileOutputStream;
import java.io.BufferedOutputStream;
import java.io.FileWriter;
import java.io.BufferedOutputStream;
import java.util.Scanner;
public class FileWritingUsingBuffered {
    public static void main(String[] args) throws IOException {
        FileWriter fw = new FileWriter("./myfile.txt",true);
        // Creating Bufferd Class Object
        BufferedWriter bfw = new BufferedWriter(fw);
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        bfw.write(str);
        bfw.close();
        fw.close();
        // writing into BufferedOutputStream
         FileOutputStream fos = new FileOutputStream("./myfile2.txt",true);
         BufferedOutputStream bos = new BufferedOutputStream(fos);
         String str2 = sc.nextLine();
         byte[] b = str2.getBytes();
         bos.write(b);
         bos.flush();
         bos.close();
         fos.close();
    }
    
}
