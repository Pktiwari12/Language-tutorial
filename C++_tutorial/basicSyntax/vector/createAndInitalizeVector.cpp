// Program to implement vector 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>num;
    // num.push_back(5);
    num = {};
    vector<int> num2;
    num2 = {3,3,2};
    num = num2;
    for(const int&i : num){
        cout << i<< "\t";
    }

    // printing the value by accessing the address
    cout << "the elements of the vector" << "\n";
    for ( int i = 0 ; i<num.size(); i++){
        cout << num.at(i) << "\t";
    }
    cout << "The size of the vector num \t" << num.size() << "\n";
    cout << "The size of the vector num1 \t" << num.size() << "\n";
}