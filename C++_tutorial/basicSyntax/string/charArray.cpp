// In cpp , the char array is also called c-string

#include<iostream>
using namespace std;
int main(){
    // here last element will be null character.
    char str[21]; 
    cout << "Enter the string" << endl;
    cin.get(str , 21);
    cout << "You entered : \n";
    cout << str;
    int size = sizeof(str)/sizeof(str[0]);
    for (int i = 0 ; i < size ; i++){
        cout << str[i] << " ";
    }
}