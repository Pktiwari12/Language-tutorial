// Program to under stand the optional format specifier(Field width)
#include<stdio.h>
int main()
{
	int a=5,b=5,c=5,d=1;
	printf("the value of a =%d  kg \n",a);
	printf("The value of b =%5d kg \n",b);
	printf("The value of c =%10d kg\n",c);
	printf("The value of d =%-10d kg\n",d);
	printf("The value of d =%10d kg\n",d);
	printf("The value of d =%10.1f kg\n",30.4);
	char name1[] = "Pradeep";
	char name2[] = "Sanjay";
	char name3[] = "Anmol";
	printf("%20s%20s\n",name1,name3);
	printf("%20s%20s\n",name1,name3);
	printf("%20s\n",name3);
	printf("%-10s\n","Raghav");
	printf("%50s\r","Raghav");
	printf("ENTe\br\bm\r");
	printf("ENter ");
	printf("Pushkar");
	printf("\a");
	
	return 0;
}