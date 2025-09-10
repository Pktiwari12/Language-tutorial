// program to understand the linear search 
#include<stdio.h>
int linearsearch(int [],int,int);
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int length = sizeof(arr)/sizeof(arr[0]);
	int element = 5;
	int key;
	key = linearsearch(arr,length,element);
	if(key!=-1)
	{
		printf("Element =%d is found at the position = %d",element,key);
	}
	if(key==-1)
	{
		printf("Element is not found.");
	}
	
	
}
int linearsearch(int arr[],int length,int element) 		// Maximum 3 parametter pass
{
	for(int i=0;i<length;i++)
	{
		if(arr[i]==element)
		{
			return i;
		}
	}
	return -1;
}