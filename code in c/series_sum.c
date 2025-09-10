#include<stdio.h>
#include<math.h>
int factorial(int n )
{
	int f;
	if (n ==1 || n==0)
	{
		return 1;
	}
	f = n*factorial(n-1);
	return f;
	
}
int main()
{
	int n;
	printf("Enter the number of n  :\n");
	scanf("%d",&n);
	int i;
	float sum =0.0;
	for(i=1;i<=n;i++)
	{
		sum = sum + ((float)i/factorial(i));
	}
	printf("The sum of the series is = %f",sum);
	return 0;
	
}