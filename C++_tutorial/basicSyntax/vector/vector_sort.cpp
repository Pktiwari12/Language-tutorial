#include<iostream>
#include<vector>
using namespace std;


// Comprator function 
bool should_i_swap(int a , int b){
    return (true ? (a > b) : false);
}


// swapper function
void swap (int& a , int& b){
    a =  a+b;
    b = a - b;
    a = a -b;
}

// unoptimal selection sort
void sortVector(vector<int>& num){
    for (int i = 0 ; i<num.size() ; i++ ){
        for(int j = i+1 ; j< num.size() ; j++){
            if(should_i_swap(num[i], num[j])){
                // swap elements
                swap(num[i] , num[j]);
            }
        }
    }

}


// Printing the vector
void printVector(vector<int>&num){
    for(const int&i :  num){
        cout << i << "\t";
    }
}





int main(){
    vector<int > num;
    int inp = 1;
    while(inp != -1){
        cout << "Enter the number to insert into vector otherwise enter -1" << endl;
        cin >> inp ;
        num.push_back(inp);
    }
    cout << "Vector before sorting" << endl;
    printVector(num);

    cout << "Array after sorting " << endl;
    sortVector(num);
    printVector(num);


}