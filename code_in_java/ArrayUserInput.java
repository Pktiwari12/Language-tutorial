import java.util.Scanner;
public class ArrayUserInput {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of array.");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("The length of array is = \t"+arr.length);
        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
        }
        System.out.println("The array elements is :");
        for(int i =0;i<arr.length;i++)
        {
            System.out.print("\t"+arr[i]);

        }
        sc.close();
    }
    
}
