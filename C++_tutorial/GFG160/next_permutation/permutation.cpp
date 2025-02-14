#include<iostream>
using namespace std;
int factorial(int );
int permutation(int , int);
int main(){
    int n , r;
    cout << "Enter the value of n " << endl;
    cin >> n ;
    cout << "Enter the value of r" << endl;
    cin >> r;
    cout << permutation(n , r);
}

int permutation(int n , int r){
    cout << factorial(n-r);
    cout << factorial(n);
    return (factorial(n) / factorial(n-r));

}

int factorial(int n){
    int factValue;
    if( n == 0 || n == 1){
        return 1;
    }
    else{
        return (n * factorial(n -1));
    }

}