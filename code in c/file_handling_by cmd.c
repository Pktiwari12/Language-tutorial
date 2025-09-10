// File handling by command line 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc , char *argv[])
{
	FILE *fp,*ft;
	int i;
	char ch;
	fp = fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("The file is not found");
		exit(1);
	}
	ft = fopen(argv[2],"w");
	if(ft == NULL)
	{
		printf("the file not found ");
		exit(2);
	}
	while(1)
	{
		ch = fgetc(fp);
		if(ch == EOF)
		break;
		else
		{
			putchar(ch);
			fputc(ch,ft);
		}
	}
	fclose(fp);
	fclose(ft);
	getch();
	return 0;
}