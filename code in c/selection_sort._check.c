// Program to implement the Selection sort
#include<stdio.h>
void selection_sort(int arr[],int length)
{
	int i,j;		// counter variable
	int min,loc;	    // Storing the  minimum value and its index
	int temp;		// for swapping
	for(i=0;i<length;i++)   	// Every round gives min value 
	{
		min = arr[i];
		loc = i;
		for(int j=i+1;j<length;j++) 		// loop for comparing rest of elements
		{
			if(min>arr[j])
			{
				min = arr[j];
				loc = j;
			}
		}
		if(loc !=i)
		{
			temp = arr[loc];
			arr[loc] = arr[i];
			arr[i] = temp;
			
		}
	}
}
int main()
{
	int n;
	printf("Enter the length of arrray :-\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array :-\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	printf("Array after sorting :-\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}