#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(2);
    pq.push(1);
    pq.push(5);
    cout << "The elements of pq" << endl;
    while(!pq.empty()){
        cout << pq.top() << "\t";
        pq.pop();
    }
    cout << endl;
    
    priority_queue<int , vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.push(2);
    pq2.push(5);
    cout << "Elements of pq2" << endl;
    while(!pq2.empty()){
        cout << pq2.top() << "\t";
        pq2.pop();
    }
    cout << endl;

    priority_queue<int , vector<int>, less<int>> pq3;
    pq3.push(1);
    pq3.push(2);
    pq3.push(5);
    cout << "Elements of pq3" << endl;
    while(!pq3.empty()){
        cout << pq3.top() << "\t";
        pq3.pop();
    }
    cout << endl;


}