// Program to Create a File and some other methods
import java.io.File;
import java.io.IOException;

public class CreateFile {
    public static void main(String[] args) {
        File fr = new File("C:\\Users\\Dell\\Desktop\\Coding\\code_in_java\\File_handling\\file1.txt");
        System.out.println("Before Creating File :-");
        System.out.println("is Exist  :-  "+fr.exists());
        System.out.println("is readable "+fr.canRead());
        System.out.println("Is Writtable  :-  "+fr.canWrite());
        try{
           
            // createNewFile return the boolean value
            boolean check = fr.createNewFile();
            if(check){
                System.out.println("The file is created Successfully.");
            }
            else{
                System.out.println("The file is not created.");
            }
            System.out.println("After Creating :-");
            System.out.println("The Path of created file :    "+fr.getAbsolutePath());
            System.out.println(" is Exist  :  "+fr.exists());
            System.out.println("is readable "+fr.canRead());
            System.out.println("Is Writtable  :-  "+fr.canWrite());
            System.out.println("the size of file   :-   "+fr.length());
            System.out.println("The name of file  :- "+fr.getName());

            
        }catch(IOException e)
        {
            System.out.println("A unexpected error is occured."+e.getMessage());
            e.printStackTrace();
        }
    }
    
}
