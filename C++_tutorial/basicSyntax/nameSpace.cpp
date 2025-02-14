#include <iostream>
using namespace std;

namespace n1{
    int x = 20;
    void fun(){
        cout << "This is fun() mehtod of n1" << endl;
    }
}

namespace n2{
    int x = 10;
    void fun(){
        cout << "This is fun() mehtod of n2" << endl;
    }
}

// Driver Code
int main(){
    cout << n1::x << endl;
    // :: is scope resolution operator
    n1::fun();

    cout << n2::x << endl;
    // :: is scope resolution operator
    n2::fun();
    
}