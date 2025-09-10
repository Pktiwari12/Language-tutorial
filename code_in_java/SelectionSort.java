
public class SelectionSort
{
    static void selectionSrt(int arr[]){
        int i,j;
        int loc,min;
        for(i=0;i<arr.length-1;i++)
        {
            min = arr[i];
            loc=i;
            for(j=i+1;j<arr.length;j++)
            {
                if(min>arr[j])
                {
                    min = arr[j];
                    loc = j;
                } 
            }
            if(min!=arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[loc];
                arr[loc] = temp;
            }
        }   
       
    }
    public static void main(String args[])
    {
        int arr[] = {3,6,1,0,44,22,89,45,100,23,9,1000,56,34};
        selectionSrt(arr);
        int i;
         System.out.println("Sorted array is =");
        for(i=0;i<arr.length;i++)
        {
            System.out.println("\t"+arr[i]);
        }
    } 
}
