#include<iostream>
using namespace std;
typedef struct Student{
    string name;
    Student(string name){
        this->name = name;
    }
    void display(){
        cout <<" Student name is =\t" << this->name;
    }
}Student;
int main(){
     Student s1("Ram");
    s1.display();
    return 0;


}