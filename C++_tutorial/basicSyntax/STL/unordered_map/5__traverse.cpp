#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, vector<int>>um = {
        {0,{3,3}},
        {1,{3,3}},
        {2,{2,1}},
        {1,{1,0}}

    };
    int res = 0;
    int mul = 1;
    for(unordered_map<int, vector<int>> :: iterator itr = um.begin() ; itr != um.end() ; itr++){
        for(unordered_map<int , vector<int>> :: iterator itr2 = next(itr) ; itr2 != um.end() ; itr2++){
            mul = itr->second[1] * itr2->second[1];
            res += mul;
        }
    }
    cout << res;

}