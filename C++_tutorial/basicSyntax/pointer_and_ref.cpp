#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int *ptr = &a;
    int &ref = b;
    cout<< "The value of a = \t" << a << "and ptr = \t" << ptr <<  " * ptr \t" << *ptr << "and the address of a=\t"<< &a;
    cout<< "/n";
    cout << "The value of b = " << b << "and the value of ref" << ref << "the address of ref = \t" << &ref ;  
    cout << "the address of b " << &b;
}