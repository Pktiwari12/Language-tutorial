// Program to implement the varadic function in C 
#include<stdio.h>
#include<stdarg.h>      // header file to use varadic functioion
/*
    va_list   : is a  user defined data type which contains a pointer that point to first argument
    va_start  : is a macro but looks like a function . it is for initialize the variable of va_list
    va_arg    : is a macro but looks like a function. it is accessing the arguments
    va_end     : is a macro but looks like a fuction. it is for uninitialized the varible of va_list
*/
void printNumbers(int size,...)     // size is for number of arguments and ellipse ... for taking number of arguments
{
    va_list args;       // any variable
    va_start(args,size);// now pointer in args is pointing to first arguments
    int i;// counter varible 
    int value;// for printing
    for(i = 0;i<size;i++)
    {
        value = va_arg(args,int);
        printf("%d\t",value);

    }
    va_end(args);


}
int main()
{
    printNumbers(5,1,2,13,4,5);
    printf("\n");
    return 0;
}
                                    