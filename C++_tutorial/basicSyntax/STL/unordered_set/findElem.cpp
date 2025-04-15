#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>st = {1,2,3,4};
    cout << *st.find(4);
    unordered_set<int> :: iterator it = st.find(5);
    cout << *it;
    if(*it == 5){
        cout << "Element is found";
    }
    else{
        cout << "Element is found";
    }
    // so we don't use the find method for conditonal purpose. we use count() method
}