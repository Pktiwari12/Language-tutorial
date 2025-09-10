import java.io.*;
public class FileHandlingIntro {
    public static void main(String args[])
    throws IOException
    {
        int i;
        FileInputStream fin;
        try{
            fin = new FileInputStream(args[0]);
        }catch(FileNotFoundException e)
        {
            System.out.println("File not Found.");
            return;
        }catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Usage: ShowFile ");
            return;
        }
        do{
            i = fin.read();
            if(i != -1)
            {
                System.out.print((char)i);
            }
        }while(i != -1);
        fin.close();
    }
}
