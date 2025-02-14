#include <iostream>
using namespace std;
int main(){
    int num = 100;
    // reference variable
    int& ref_num = num;
    
    cout << "The value of num " << num << endl;
    cout << "The address of num " << &num << endl;
    cout << "The value of ref_num " << ref_num << endl;
    cout << "The address of ref_num " << &ref_num << endl;
    ref_num = 345;
    cout << "The value of num " << num << endl;
    cout << "The value of ref_num" << ref_num << endl;
    return 0;
} 