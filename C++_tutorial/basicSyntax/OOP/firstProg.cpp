#include <iostream>
using namespace std;
class Room{
    public:
        double length;
        double width; 
        double height;
        double volumeCal(){
            return length * width * height;
        }
        double areaCal(){
            return 2*(length*width + width*height + height*length);
        }
};
int main(){
    Room r1;
    r1.length = 12;
    r1.width = 2;
    r1.height = 4;
    cout << "The surface area of room is \t " << r1.areaCal() << endl;
    cout << "The volume of the room is \t" << r1.volumeCal() << endl;


    return 0;
}