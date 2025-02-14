#include <iostream>
using namespace std;
void sumAndDiff(int *a , int *b);
int main(){
    int a , b;
    cout << "Enter the first number :-" << endl;
    cin >> a;
    cout << "Enter the second number ;-" << endl;
    cin >> b;
    cout << a <<endl <<  b << endl;
    sumAndDiff(&a , &b);
    cout << a << endl << b << endl;

}
void sumAndDiff(int *a , int *b){
     int sum = *a + *b;
     int diff;
    if(*a > *b){
        cout << " i am in if" << endl;
        diff = *a - *b;
    }
    else {
        cout << "i a in else" << endl;
        diff = *b - *a;
    }
    *a = sum;
    *b = diff;
    // cout << *a << endl <<   *b << endl ;
}
