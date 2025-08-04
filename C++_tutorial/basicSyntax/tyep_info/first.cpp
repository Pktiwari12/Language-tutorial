#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    int a = 10;
    cout << typeid(a).name() << endl;
    char c = '1';
    cout << typeid(c).name() << endl;
    cout << static_cast<int>(c);
}