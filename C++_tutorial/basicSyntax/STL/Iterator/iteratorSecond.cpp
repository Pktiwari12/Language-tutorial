#include<bits/stdc++.h>
using namespace std;

int main (){
    vector<pair<int , int>> vp = {{2,3},{4,5},{8,0},{2,3}};
    vector<pair<int , int>> ::iterator itr;
    itr = vp.begin();
    while(itr != vp.end()){
        cout <<(*itr).first << " " << (*itr).second<< endl;
        itr++;
    }

    // this works same as above
    cout << endl << endl;
    itr = vp.begin();
    while(itr != vp.end()){
        cout << itr->first <<" " << itr->second<< endl;
        itr++;
    }

}