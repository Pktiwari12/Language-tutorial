// Program to implement the bubble sort
#include<stdio.h>
void bubble_sort(int size,int arr[])		
{
	int i,round;			// Counter variable
	for( round =0;round<size-1;round++)
	{
		for( i=0;i<size-round;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	printf("Array in bubble sort\n");		// Array Printing in bubble sort function
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	
}
int main()
{
	int n;
	printf("Enter the length of array :-\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element of array \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
//	int length = sizeof(arr)/sizeof(arr[0]);
	//printf("%d lenth\n",length);	 // Here my length is 7
//	printf("\n");
	bubble_sort(n,arr);
//	printf("\nlength after using the bubble sort function = %d",length);	// but here length is 9("How")
	printf("\nArray after sorting:-\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
		
	}
	return 0;
	
}