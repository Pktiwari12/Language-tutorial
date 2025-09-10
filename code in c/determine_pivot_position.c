// Program to determine the sorted position of pivot
#include<stdio.h>
int main()
{
	int arr[9]={5,0,4,6,3,-1,6,10,2};
	int pivot=1;
	//printf("Enter the value of pivot.");
	//scanf("%d",&pivot);
	int left = 0;
	int right = 8;
	goto left;
	right :
	while(arr[pivot]<=arr[right] && pivot != right)    // scan the Right to left
	{
		right--;
	}
	if(pivot == right)
	{
		goto printing;
			
	}
	if(arr[pivot]>arr[right])
	{
		int temp;
		temp = arr[pivot];
		arr[pivot]= arr[right];
		arr[right] = temp;
		pivot = right;
		goto left;
	}
	left :  								// scaning of left to right
		while(arr[left]<=arr[pivot] && left!=pivot)
		{
			left++;
		}
		
		if(left == pivot)
		{
			goto printing;
		}
		if(arr[left]>arr[pivot])
		{
			int temp;
			temp = arr[pivot];
			arr[pivot]=arr[left];
			arr[left]= temp;
			pivot = left;
			goto right;
		}
	printing :
		for(int i =0;i<9;i++)
		{
			printf("\t%d",arr[i]);
			
		}
		return 0;
}
