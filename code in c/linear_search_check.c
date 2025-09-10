#include<stdio.h>
// Program to implement the Linear Search algorithm 
int linear_search(int arr[],int length,int element)
{
	int i;			// Counter variable
	int index;			// Store the index of element
	for(i=0;i<length;i++)
	{
		if(element == arr[i])
		{
			index = i;
			break;
		}
	}
	return (index+1);
	
	
}
int main()
{
	int n;
	printf("Enter the length of array :-\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array :-\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element which want to search:-\n");
	int element;
	scanf("%d",&element);
	int loc = linear_search(arr,n,element);
	printf("Element %d is present at the location of array is \t %d",element,loc);
	return 0;
}