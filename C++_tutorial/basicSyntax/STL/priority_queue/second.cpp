#include<iostream>
#include<queue>
#include<functional>
using namespace std;
bool cmp(int a, int b){
    return a > b;
}

int main(){
    priority_queue<int, vector<int>, function<bool(int, int)>> pq(cmp);
    pq.push(2);
    pq.push(1);
    pq.push(5);
    cout << "The elements of pq" << endl;
    while(!pq.empty()){
        cout << pq.top() << "\t";
        pq.pop();
    }
    cout << endl;
}