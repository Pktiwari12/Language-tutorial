#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int age;
    public:
        
        
        // constructor to initialize the memember variables
        Student(string name, int age)
        : name{name}
        , age{age}{

        }

        // construnctor to copy one object to another
        Student(const Student& stud)
        : name{stud.name}
        ,age{stud.age}{

        }
        void display(){
            cout << "The name of the student \t" << this->name << "\n";
            cout << "The age of the student \t" << this->age << "\n";
        }
};
int main(){
    // first object with passing values 
    Student s1("pradeep" , 19);
    cout << "The details of student s1 "<< "\n" ;
    s1.display();

    // second object with passing first object
    Student s2(s1);
    cout << "The details of student s2 " << "\n";
    s2.display();

    // thired object with passing second object
    Student s3 = s2;
    cout << "The details of student s3" << "\n";
    s3.display();
}