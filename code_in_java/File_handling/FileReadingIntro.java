import java.io.IOException;
import java.io.FileInputStream;
import java.io.FileReader;
import java.util.Scanner;
import java.io.File;
public class FileReadingIntro {
    public static void main(String[] args) throws IOException{
        FileInputStream fis = new FileInputStream("./myfile.txt");
        int i;
        do{
            i = fis.read();
            if(i != -1){
                // typecasting  of unicode
                System.out.print((char)i);

            }

        }while(i != -1);
        System.out.println();
        fis.close();
        // Reading from a file using FileReader Class
        FileReader fread = new FileReader("./file1.txt");
        while((i = fread.read()) != -1){
            System.out.print((char)i);

        }
        fread.close();
        System.out.println();
        // Reading From a file Using Scanner Class
        Scanner sc = new Scanner(new File("./file1.txt"));
        while(sc.hasNextLine()){
            System.out.println(""+sc.nextLine());
        }
    }
    
}
