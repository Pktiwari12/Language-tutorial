// Calculating the factorial 
#include<stdio.h>
void factorial1(int );
int factorial2(int);
int main()
{
	int num,fact;
	printf("\nenter the number :");
	scanf("%d",&num);
	if(num>=1)
	{
		factorial1(num);
		fact = factorial2(num);
		printf("\nTHe factorial of number in factorial2 = %d",fact);
	}
	else
	printf("\nEnter correct number .\n");
	
}
void factorial1(int num)
{
	int fact=1;
	for (int i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	printf("\nThe factorial of the number in the funnction 1 : %d",fact);
	
}
int factorial2(int num)
{
	int fact;
	if(num == 1 || num == 0)
	{
		return 1;
	}
	fact = num * factorial2(num-1);
	return fact;
}