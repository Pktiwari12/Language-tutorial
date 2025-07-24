#include<iostream>
using namespace std;

int main(){
    string s ="Hello";
    char c = s[0];
    s.erase(0,1);
    s += c;
    cout << s;
}