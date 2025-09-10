import java.io.File;
import java.io.IOException;
public class CreationFile {
    public static void main(String args[]) throws IOException
    {

        // in the file constructor , we give the directory of file
        // when file does not exist
        File f1 = new File("C:/Users/Dell/Desktop/Coding/code in java/for_file_handling.txt");
        System.out.println("Is File 1 exist :- "+f1.exists());
        System.out.println("Is file 1 readable :-  "+f1.canRead());
        System.out.println("The absolute path of file 1 :-   "+f1.getAbsolutePath());
        System.out.println("The name of file 1 :-"+f1.getName());
        System.out.println("Is file 1 writable :-   "+f1.canWrite());
        System.out.println("the length of file 1 is :-  "+f1.length());
        // Creating File and operate these operation
        File f2 = new File("C:/Users/Dell/Desktop/Coding/code in java/for_file_handling1.txt");
        try{
            if(f2.createNewFile() || f2.exists())
            {
                System.out.println("Is File 2 exist :- "+f2.exists());
                System.out.println("Is file 2 readable :-  "+f2.canRead());
                System.out.println("The absolute path of file 2 :-   "+f2.getAbsolutePath());
                System.out.println("The name of file 2:-"+f2.getName());
                System.out.println("Is file 2 writable  :-   "+f2.canWrite());
                System.out.println("the length of file 2 is :-  "+f2.length());
            }
            else{
                throw new IOException("File not created.");
            }

        } 
        catch(IOException e){
            System.out.println("Unexpected Error is occured."+e.getMessage());
        }


    }
    
}
