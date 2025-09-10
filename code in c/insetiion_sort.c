// Program to sort the elements of array by insertion sort
#include<stdio.h>
void insertion_sort(int[],int);
int main()
{
	int n;
	printf("\nEnter the number of elements of array :");
	scanf("%d",&n);
	int arr[n],i;
	printf("\n Enter the elements of array .");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("\n YOur Entered  array  is :");
	for(i=0;i<=n-1;i++)
	{
		printf("\t%d",arr[i]);
		
	}
	insertion_sort(arr,n);
	printf("\nelements of array after sorting :");
	for(i=0;i<=n-1;i++)
	{
		printf("\t%d",arr[i]);
		
	}
	return 0;
	
}

void insertion_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<=n-1;i++)
	{
		temp = arr[i];
		for(j=i-1;j>=0 && temp<arr[j];j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1] = temp;
	}
}