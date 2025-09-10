#include<stdio.h>
int main()
{
	char name[][16]={"Raman","Rakesh","rohan","Pradeep","Sukki"};
	int i;
	printf("number of letter in the word = %u",(sizeof(name)/sizeof(char)/sizeof(name[0])/sizeof(char)));
	//for(int i=0;i<(sizeof(name)/sizeof(char)/sizeof(name[0])/sizeof(char)));
}