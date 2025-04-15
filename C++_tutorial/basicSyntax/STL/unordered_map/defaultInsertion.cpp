#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<char, int>um;
    cout << "before " << "\t"<< um['f']++<<endl;

    cout << "after " << "\t" << um['f']++<< endl;
    cout << um.at('f')<< endl;
    string s = "pradeep kumar tiwari";
    unordered_map<char, int> m;
    for(char ch : s){
        m[ch]++;
    }

    // printing
    cout << m.size() << endl;
    for(auto pair : m){
        cout << pair.first << "  " << pair.second << endl;
    }

}