#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    unordered_map<int , vector<int>> graph = {
        {1, {2,3}},
        {2,{1,3,4}},
        {3,{1,2,5}},
        {4,{2,5}}
    };

    // printing unordered_map
    // cout << graph[-2].size();
    cout << graph.size() << endl;
    cout << graph[2].size() << endl;
    cout << endl << endl;
    // printing the map
    // using range-based loop
    for(const auto& pair : graph){
        cout << pair.first << "\t";
        for(const auto & i : pair.second){
            cout << i << " ";
        } 
        cout << endl;
    }
    cout << endl << endl;
    // using iterator
    for(unordered_map<int , vector<int>> :: iterator itr = graph.begin() ; itr != graph.end() ; itr++){
        cout << itr->first << "\t";
        for(int i = 0 ; i<itr->second.size() ; i++){
            cout << itr->second[i] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;
    
}