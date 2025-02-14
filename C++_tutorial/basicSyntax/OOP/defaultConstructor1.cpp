#include <iostream>
using namespace std;
class Room {
    private:
        double length;
        double width{5.5};
    public:
        Room()
        : length{45.5} {
            cout << "The length of room is " << "\t" << length;
            cout << "the width of room is " << "\t" << width;

        }
};

 int main (){
    Room r1;
    // cout << r1;
    Room *r2 = new Room();
    cout << "The value of r2 is" << r2 << "and *r2 \t" << endl;
    // cout << *r2;
    delete r2;
    r2 = nullptr;
 }
 

 // NOTE :- We can not access the value of r1 and *r2 eg. printing the value of these