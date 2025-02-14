#include<iostream>
using namespace std;
int main(){
    auto greet = [](){
        cout << "Jai Shree Ram" << endl;
    };
    greet();
}