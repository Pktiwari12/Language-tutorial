// program to sort the element by selection sort
#include<stdio.h>
int min(int[],int,int);
int main()
{
	int i,n;
	printf("\nEnter the number of elements of array :");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of array :");
	printf("\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Your entered array is :\t");
	for(i=0;i<=n-1;i++)
	{
		printf("\t%d",arr[i]);
	}
	int temp,LOC,k;
	for(k=0;k<=n-2;k++)
	{
		LOC = min(arr,n,k);
		temp = arr[k];
		arr[k]=arr[LOC];
		arr[LOC] = temp;
	}
	printf("\n array after sorting :\n");
	for(int i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
	

}

int min(int arr[],int n,int k)
{
	int i, min,LOC;
	min=arr[k];
	LOC = k;
	for(i=k+1;i<=n-1;i++)
	{
		if(min>arr[i])
		{
			min = arr[i];
			LOC = i;
		}
	}
	return LOC;
}