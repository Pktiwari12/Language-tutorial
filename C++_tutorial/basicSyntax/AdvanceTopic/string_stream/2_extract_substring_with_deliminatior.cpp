#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string str = "Hello, Pradeep , Kumar Twari";
    stringstream ss;
    ss << str;
    string buffer;
    while(getline(ss, buffer, ',')){  // default delimiter is new line character '/n' now is comma ','
        cout << buffer;
    }

}