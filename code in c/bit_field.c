// Program to understand the bit fields
#include<stdio.h>
/*struct date
{
	int d; 		// here we know required 5 bits. but we give 4 bytes(32 bits)
	int m; 		// 4 bits
	int y;
};
int main()
{
	struct date d1;
	printf("THe size of d1 is = %d",sizeof(d1));
	return 0;
}*/


// After using the bit field concept
#include<stdio.h>
struct date
{
	int d:5; 		// here we know required 5 bits. but we give 4 bytes(32 bits)
	int m:4; 		// 4 bits
	int y;
};
int main()
{
	struct date d1;
	printf("THe size of d1 is = %d",sizeof(d1));
	return 0;
}
