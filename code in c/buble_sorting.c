// Program to sort the elements by bubble sorting
#include<stdio.h>
void bubble_sort(int[],int);
int main()
{
	int n;
	printf("\nEnter the number of element to store in array :");
	scanf("%d",&n);
	int array[n],i;
	printf("\nEnter the elements to store in the array \t:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nYour Entered array is \t:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	bubble_sort(array,n);
	printf("\nAfter sorting  array is \t:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	

}
void bubble_sort(int array[],int n)
{
	int round,i,swap;
	for(round=1;round<=n-1;round++)			// loop for round
	{
		for(i=0;i<=n-1-round;i++)			// loop for comparison
		{
			if (array[i]>array[i+1])
			{
				swap = array[i];
				array[i]=array[i+1];
				array[i+1]=swap;
			}
		}
	}
}