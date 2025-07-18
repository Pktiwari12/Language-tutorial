#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<char, int>um;
    cout << "before " << "\t"<< um['f']++<<endl;
    cout<< um['e'];

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

    // cout << "hello";
    cout << um.count('z');
    um.insert({'z',1});
    cout << um.count('z') << endl;
    cout << um.count('y') << endl;
    um['y'] = 1;
    cout << um['y'];
}