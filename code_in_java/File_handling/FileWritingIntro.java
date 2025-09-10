import java.io.File;
import java.io.IOException;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.BufferedOutputStream;
public class FileWritingIntro {
    public static void main(String[] args) {
        // File fr = new File("C:\\Users\\Dell\\Desktop\\Coding\\code_in_java\\File_handling\\myfile.txt");
        // if(fr.exists()){
        //     System.out.println("myfile is exist.");
        // }
        // else{
        //     System.out.println("myfile does not exist");
        // }
        // try {
        //     if(fr.createNewFile()){
        //         System.out.println("File is created.");
        //     }else{
        //         System.out.println("The file is not created.");
        //     }
        // } catch (Exception e) {
        //     System.out.println("A unexpected error is occured."+e.getMessage());
        //     e.printStackTrace();
        //     // TODO: handle exception
        // }
        // this object for writing into the file
        
        try {
            FileOutputStream fout = new FileOutputStream("fr.txt");
            FileWriter fw = new FileWriter("C:\\Users\\Dell\\Desktop\\Coding\\code_in_java\\File_handling\\file1.txt");
            // System.out.println("my file exist : "+fr.exists());
            String s = "Welcome to File handling in java by Byte Stream.";
            // writing into file by charactere stream
            String s2 = "Welcome to File handling in java by Character Stream";
            fw.write(s2);
            fw.close();
            // converting string into charArray
            char ch[] = s.toCharArray();
            // writing to file
            for(int i=0;i<s.length();i++){
                fout.write(ch[i]);
            }
            fout.close();

   
        } catch (Exception e) {
            System.out.println("A unexpected error is occured "+e.getMessage());
            e.printStackTrace();
            // TODO: handle exception
        }

        
    }

    
}
