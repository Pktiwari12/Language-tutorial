#include <iostream>
using namespace std;
int sum (const int& , const int&);
void swap (int& , int&);
int main (){
    int n1 , n2;
    cin >> n1 >> n2;
    cout << "The value of n1 \t"<< n1 << endl ;
    cout << "The value of n2 \t" << n2 << endl;
    int add = sum(n1 , n2);

    cout << "the sum of n1 and n2 \t" << add << endl;

    swap(n1 , n2);

    cout << "The value of n1 \t" << n1 << endl;
    cout << "The value of n2 \t" << n2 << endl;
}

// funtion to add two numbers with constant reference parameter
int sum (const int& num1 , const int& num2){
    return (num1 + num2);

}

// funtion to swap two numbers with reference as parameter
 
void swap (int& num1 ,int& num2){
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}