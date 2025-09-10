// Progrma to select the prime number 1 to 300
#include<stdio.h>
int main()
{
	int i,j;
	printf("the prime numbers 1 to 300 .\n");
	for(i=1;i<300;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0 && j!=1 && j!= i )
			{
				break;
			}
			else if(i==j && i!=1)
			{
				printf("\t%d",i);
			}
		}
	}
}