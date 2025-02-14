// by  using the auto keyword , there is no need to specify datatype. It will check automatically


# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<pair<int , int>> v_p = {{1,2} , {3,4}, {5,6}, {7,8}};
    for(auto &i : v_p){
        i.first = i.first + 1;
        i.second = i.second + 1;
    }
    // printing
    for(auto i : v_p){
        cout << i.first << " " << i.second << endl;
    }
}