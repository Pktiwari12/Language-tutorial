# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<pair<int , int>> v_p = {{1,2} , {3,4}, {5,6}, {7,8}};
    cout << "Without using reference operator in ranged loop";
    for(pair<int , int> i : v_p){
        i.first = i.first + 1;
        i.second = i.second + 1;
    }
    // printing
    for(pair<int , int>i : v_p){
        cout << i.first << " "  << i.second << endl;
    }
    cout << endl << endl;

    cout << "By using reference operator in ranged loop";
    for(pair <int , int>& i : v_p){
        i.first = i.first + 1;
        i.second = i.second + 1;
    }
    // printing
    for(pair <int , int> i : v_p){
        cout << i.first << " " << i.second << endl;
    }
}