#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, vector<int>>um = {{1,{1,2,3}}, {2, {2,3,4}}, {3,{3,4,5}}, {4,{4,5,6}}};
    for(const auto& key_value : um){
        cout << key_value.first << "-->\t{";
        for(int i = 0 ; i < key_value.second.size(); i++){
            cout << key_value.second[i] <<  " ";
        }
        cout << "}" << endl;
    }

    // structure binding is not available in my version cpp
     
    for(const auto& [key, value] : um){}
    
}