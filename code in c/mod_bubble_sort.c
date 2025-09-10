#include<stdio.h>
void bubble_sort(int arr[],int);
int main()
{
	int n;
	printf("\nEnter the number of elements to store in array :");
	scanf("%d",&n);
	int arr[n],i;
	printf("\n Enter array element to store. :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n yor entered elements in the array.  :");
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
	bubble_sort(arr,n);
	printf("\nAfter sorting , element of array is  \t:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}

}
void bubble_sort(int arr[],int n)
{
		int temp,round,i,flag;
		for(round =1;round<=n-1;round++)
		{
			flag=0;
			for(i=0;i<=n-1-round;i++)
			{
				if(arr[i]>arr[i+1])
				{
					flag=1;
					temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
			}
			if(flag==0)
			{
				printf("\nThe number of round is =%d",round);
				break;
				
			}
			
		}
		
}


	
