#include<stdio.h>
long double factorial2(int num)
{
	long double fact;
	if(num == 1 || num == 0)
	{
		return 1;
	}
	fact = (long double)num * factorial2(num-1);
	return (fact);	
}
int main()
{
	int num;
	long double fact;
	printf("Enter the number :\n");
	scanf("%d",&num);
	fact =	factorial2(num);
	printf("factorial = %Lf",fact);
}