#include<iostream>
using namespace std;
int main(){
    const float PI = 3.14;
    int r = 7;
    cout << "The value of pi " << PI << endl;
    float area = PI * r * r;
    cout << "The area is " << area << endl;
    // PI = 8.4;                    // const variable never be initialised again
    return 0;
     
}