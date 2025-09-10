#include<stdio.h>
void factor(int num)
{
	int i;
	printf("\nThe factors of the number %d :",num);
	for ( i=1;i<=num ; i++)
	{
		if(num%i==0)
		{
			printf("\t%d",i);
		}
	}
}
int main()
{
	int num,i;
	printf("\nEnter any number :");
	scanf("%d",&num);
	if(num>1)
	{
		for(i=2;i<=num;i++)
		{
			if(num%i==0 && i!=num )
			{
				printf("\nThe number %d is not a prime number .\n",num);
				factor(num);
				break;
			}
			else if(i==num)
			{
				printf("\nThe number is a prime number .",num);
				factor(num);
			}
		
		}
	}
	return  0;
}