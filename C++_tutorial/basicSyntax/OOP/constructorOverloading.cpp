// Program to define constructor overloading

#include <iostream>
using namespace std;
class Box{
    private:
        int length, width, height;

    public:
        Box(){
            this->length = 1;
            this->width = 1;
            this->height = 1;
        }
        Box(int len){
            this->length = len;
            width = 1;
            height = 1;
        }
        Box(int len, int width){
            this->length = len;
            this->width = width;
            this->height = 1;

        }
        Box(int len , int width , int height)
        : length{len}
        , width{width}
        , height{height}{

        }
        void display(){
            cout << "The length of the box \t" << this->length << "\n";
            cout << "Width of the box \t" << this->width << "\n";
            cout << "height of the box \t" << this->height << "\n";
        }
};

int main(){
    Box b1;
    cout << "The dimenstions of the box 1" << "\n";
    b1.display();
    Box b2(4);
    cout << "\n\nThe  dimenstions of the box 2" << "\n";
    b2.display();
    Box b3(4, 5);
    cout << "\n\n" << "The dimenstions of the box 3" << "\n";
    b3.display();
    Box b4(4,5,6);
    cout << "\n\n" << "The dimenstions of the box 4" << "\n";
    b4.display();
}