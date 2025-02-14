#include<iostream>
using namespace std;
int main(){
    int *ptr;
    ptr = new int;
    *ptr = 45;
    cout << "the value in the ptr pointer " << *ptr << endl;
    int *ptr2 = new int{333};   // initializing value in the pointer during dynamic memory allocation
    cout << "the value into the ptr2 =" << "\t" << *ptr2 << endl;



    // dynamic array is created using new keyword
    int n ; 
    cout << "Enter the size of the dynamic array ";
    cin >> n ;
    int *ptr3 = new int [n];
    int i = 0;
    
    // storing the value in the dynamic created array
    cout << "The value of ptr3 "  << "\t" << ptr3 << endl;
    for(i = 0 ; i<n ; i++){
        cout << "the value of ptr3 + i \t" << ptr3 << "+" << i << " =" << "\t" << (ptr3 + i);
        *(ptr3 + i) =  i;

    }

    // printting the values
    cout << "The element stored into dynamic array ptr 3 " << endl;
    for(i = 0 ; i< n ; i++){
        cout << ptr3[i] << " ";

    }


    // deallocation of dynamic memory allocation
    delete ptr;
    delete ptr2;
    delete [] ptr3;
    ptr = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;
    cout << endl ;
    cout << "the value of ptr " << "\t" << ptr;
    cout << "the value of ptr2 " << "\t" << ptr2;
    cout << "the value of ptr3 " << "\t" << ptr3;
    
    
    
    
}

