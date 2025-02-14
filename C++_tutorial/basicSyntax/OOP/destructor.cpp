// Program to define the destructor 
#include <iostream>
using namespace std;
class Box{
    private:
        int* length;
        int* width;
    public:
        // non-parametrized constructor function to allocate the dynamic memory to the member pointer variable
        Box()
        :length{nullptr}
        , width{nullptr}{

        }
        
        // parametrized constructor function to allocate the dma to member pointer variable
        Box(int len , int width)
        : length{new int{len}}
        ,width{new int{width}}{

        }

        void display(){
            cout << "The value of length =\t"<< length << "\t" << "and *length =\t"<< *length << "\n";
            cout << "The value of width =\t"<< width<< "\t" << "and *width =\t"<< *width << "\n";
            
        }
        

        // Destructor to allocate the memeory 
        ~Box(){
            delete length;
            delete width;
        }


};
int main(){
    Box b1;
    cout << "The display of member variables of class box" << "\n";
    // we can not derefrence the nullptr valued pointer variable
    // b1.display();
    Box b2(5,9);
    cout << "\n\nThe memeber pointer variables of object b2 of class box" << "\n";
    b2.display();


}