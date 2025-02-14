// Using ranged based loop is easy to write iterator code manually

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vect = {1, 2, 3,4};
    cout << "When we take copy of the vector in range based loop" << endl;
    for(int i : vect){
        i += 1;
    }
    for(int i : vect){
        cout << i << "\t";
    }
    cout << endl << endl << endl;

    cout << "When we take reference of the vector in range based loop" << endl;
    for(int &i : vect){
        i += 1;
    }
    for(int i : vect){
        cout << i << "\t";
    }
    cout << endl;

}