#include<stdio.h>
int main()
{
	int arr[][5]={{1,2,3,4,5},{2,3,4,5,6},{1,4,67,8,9}};
	printf("The size of whole array : %d ",sizeof(arr));
	printf("The number  of  columns : %d",sizeof(arr[0])/sizeof(int));
	printf("The number of rows : %d",(sizeof(arr)/sizeof(int))/(sizeof(arr[0])/sizeof(int)));	
}