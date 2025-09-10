// Program to find the min and max value of array
#include<stdio.h>
int max(int[],int);
int min(int[],int);
int main()
{
	int n;
	printf("\nEnter the number of array elements :");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
	printf("\nYour entered array is :");
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
		
	}
	int LOC;
	LOC=max(array,n);
	printf("\nThe maximum value of array is : \t%d",array[LOC]);
	LOC=min(array,n);
	printf("\nthe minimum value of array is :\t%d",array[LOC]);
	return 0;
	
}
int max(int array[],int n)
{
	int i,max,LOC;
	max=array[0];
	LOC=0;
	for(i=1;i<n;i++)
	{
		if(max<array[i])
		{
			max=array[i];
			LOC = i;
			
		}
	}
	return LOC;
}

int min(int array[],int n)
{
	int min,LOC,i;
	min = array[0];
	LOC  = 0;
	for(i=1;i<n;i++)
	{
		if(min>array[i])
		{
			min = array[i];
			LOC = i;
		}
	}
	return LOC;
}