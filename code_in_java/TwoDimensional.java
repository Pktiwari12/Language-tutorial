import java.util.Scanner;
public class TwoDimensional {
    public static void main(String[] args)
    {
        // initialize at declare time
        System.out.println("First array ");
        int arr[][] = {{2,3,4,5},{1,24,533,23},{123,443,543,45}};
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr[0].length;j++)
            {
                System.out.print("\t"+arr[i][j]);
            }
            System.out.println();
        }
        System.out.println("Second Array ");
        int arr2[][] = {{2,3,4},{1,4,5,6,},{45,56,24,34,53}};
        for(int i=0;i<arr2.length;i++)
        {
            for(int j=0;j<arr2[i].length;j++)
            {
                System.out.print("\t"+arr2[i][j]);
            }
            System.out.println();
        }
        System.out.println("Enter the length and breadth of Two dimenstional array");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int arr3[][] = new int[n][m];
        System.out.println("The no. of rows of array = "+arr3.length);
        System.out.println("the number of colums of arr ="+arr3[0].length);
        System.out.println("Enter the elements of array");
        for(int i=0;i<arr3.length;i++)
        {
            for(int j=0;j<arr3[i].length;j++)
            {
                arr3[i][j] = sc.nextInt();
            }
        }
        for(int i=0;i<arr3.length;i++)
        {
            for(int j=0;j<arr3[i].length;j++)
            {
                System.out.print("\t"+arr3[i][j]);
            }
            System.out.println();
        }

    }
    
}
