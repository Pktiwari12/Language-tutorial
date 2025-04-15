#include <iostream>
using namespace std;
int main(){
    string str1;
    cout << "Enter the string " << endl;
    getline(cin , str1);
    cout << str1 << endl;

    // by usig for loop
    for (int i = 0 ; i < str1.length() ; i++){
        cout << str1[i] << " ";
    }
}