#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string str = "Hello , Pradeep kumar tiwari";
    stringstream ss(str);
    
    string buffer;
    while(ss >> buffer){
        cout << "buffer " << "\t" << buffer << endl;
    }
    
}