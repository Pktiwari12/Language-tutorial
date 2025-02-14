#include <iostream>
using namespace std;

 namespace n1{
    int x = 20;
    void fun(){
        cout << "This is fun() mehtod of n1" << endl;
    }
}
using namespace n1;
// Driver Code
int main(){
    cout << x << endl;
    // :: is scope resolution operator
    fun();
}