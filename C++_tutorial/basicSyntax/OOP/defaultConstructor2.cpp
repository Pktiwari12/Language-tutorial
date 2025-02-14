#include<iostream>
using namespace std;
class Room {
    private:
        int length{3};
        int width{2};
        int height{1};
    public:
        Room()= default;
        void printDim(){
            cout<< "the length of the room \t " << length << endl;
            cout << "The width of the room \t" << width << endl;
            cout << " the height of the room \t" << height << endl;
        }

};
int main(){
    Room r1;
    r1.printDim();
}