#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> vect = {1, 2, 3, 4, 5};
    
    // traversing the vecotr by their index
    cout<< "Vector is printed using their index" << endl;
    for(int i = 0 ; i< 5 ; i++){
        cout<< vect[i] << "\t";
    }
    cout<< endl;

    // Iterator
    vector<int> ::iterator itr = vect.begin();
    cout<< "Vector is printed using iterator" << endl;
    while(itr != vect.end()){
        cout<< *itr << "\t";
        // itr = itr+1;
        itr++;
    }

    // itr++ = moves to next iterator
    // while itr = itr + 1 => moves to next location
    // therefore, in case of vector both are working same

}