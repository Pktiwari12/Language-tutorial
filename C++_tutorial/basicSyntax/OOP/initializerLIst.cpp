#include<iostream>
using namespace std;
class Box{
    private:
        int length, width, height;
    public:
        Box(int width , int height , int length)
        :width{width},
        height{height},
        length{length}{

    }
    void display(){
        cout << "The length is \t" << this->length << "\n";
        cout << "The width is \t" << this->width << "\n";
        cout << "The height is \t" << this->height << "\n";
    }
};
int main (){
    Box b1(4,5,6);
    b1.display();
}