#include<iostream>
using namespace std;
int main(){
    int var = 10;
    // pointer variable
    int *ptr;
    ptr = &var;
    cout << "The value of var " << var << endl;
    cout << "The address of var" << &var << endl;
    cout << "The value of ptr " << ptr << endl;
    cout << "The value of *ptr " << *ptr << endl;
    // changint the value of var through pointer
    *ptr = 123;
    cout << "The value of var " << var << endl;
    cout << "The value of *ptr " << *ptr << endl;
    return 0;

}