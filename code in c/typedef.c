#include<stdio.h>
typedef struct student {
	int rollno;
	char name[30];
	float percentage;
}STD;
int main()
{
	struct student s2 = {345,"Surendra",85};	
	STD s1 = {211409017,"Pradep ", 87};
	printf("THe rool no. is =%d\n",s1.rollno);
	printf("The name of student is = %s\n",s1.name);
	printf("the percentage of student is = %f\n",s1.percentage);
	printf("THe name is =%s\n",s2.name);
	typedef int* POINTER;
	 POINTER a,b;
	a = &s1.rollno;
	printf("The roll no. is = %d",*a);
	return 0;
	
}
