#include<iostream>
#include<queue>
#include<functional>
using namespace std;

struct student{
    string name;
    int marks;
    char sec;

};

bool cmp(student s1, student s2){
    return s1.marks < s2.marks;
}

int main(){
    priority_queue<student, vector<student>, function<bool(student, student)>> pq(cmp);
    pq.push({"Ram", 100, 'A'});
    pq.push({"pradeep", 20, 'B'});
    pq.push({"pavan", 89, 'A'});

    while(!pq.empty()){
        cout << pq.top().name << "\t" << pq.top().marks << "\t" << pq.top().sec << endl;
        pq.pop();
    }

}

