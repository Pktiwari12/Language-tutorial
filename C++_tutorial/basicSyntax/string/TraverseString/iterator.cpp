#include<iostream>
using namespace std;
void recursive(string&, string :: iterator);
void recursive2(string&, auto);
int main(){
    string str = "pradeep";
    string :: iterator itr;
    for(itr = str.begin() ; itr != str.end() ; itr++){
        cout << *itr << "\t";
    }
    cout << endl << endl;
    recursive(str, str.begin());
    cout << endl << endl;
    recursive2(str, str.begin());
}

void recursive(string& str, string :: iterator itr ){
    if(itr == str.end()){
        return;
    }
    cout << *itr << "\t";
    recursive(str, ++itr);
}


void recursive2(string& str, auto itr ){
    if(itr == str.end()){
        return;
    }
    cout << *itr << "\t";
    recursive(str, ++itr);
}