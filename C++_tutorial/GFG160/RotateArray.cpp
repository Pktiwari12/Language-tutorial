#include <iostream>
using namespace std;
void printArray(int arr[] , int n);
void rotateArrayRight(int[] , int , int);
void rotateArrayLeft(int[] , int , int);
void swap(int& , int&);
void reverse(int [] , int , int);
int main(){
    int n; // size of array
    cout << "Enter the size of array"<< endl;
    cin >> n;
    int arr[n];
    int i;
    for(i = 0 ; i < n ; i++){
        cout << "Enter the elment " << i << "of array\t:";
        cin >> arr[i]; 

    }
    cout << "The array is : " << endl;
    printArray(arr , n);

    // for rotating 
    int k ;
    // cout << "Enter the number to rotate right (clockwise) " << endl;
    // cin >> k;
    // cout << "The rotate number " << k << endl;
    // rotateArrayRight(arr , n , k);
    // cout << "The array after rotating " << endl;
    // printArray(arr , n);
    
    cout << "Enter the number to rotate left(couter clockwise)" << endl;
    cin >> k;
    cout << "The rotat number is :" << k << endl;
    rotateArrayLeft(arr , n , k);
    cout << "The array after rotating" << endl;
    printArray(arr ,n);


}


void printArray(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){
        cout << arr[i] << "\t";
    }

}


void rotateArrayRight(int arr[] , int n , int k){
    if(k % n == 0){
        return ;
    }
    int left , right ;
    // reverse the last k elements
    left = n - (k%n);
    right = n - 1;
    reverse(arr , left , right);


    // cout << "first Reversing " << "/t" << endl;
    // printArray(arr , n);

    // reverse the elemtnts from 0 to n - k -  1
    left = 0;
    right = n-(k%n)-1;
    reverse(arr , left , right);
    // cout << "second Reversing " << "\t" << endl;
    // printArray(arr , n);

    // reverse the whole array 
    left = 0;
    right = n - 1;
    reverse(arr , left , right);


}



void rotateArrayLeft(int arr[] , int n , int k){
    
    if(k % n == 0){
        return ;
    }


    int left , right;

    
    // first reversing to reverse the first k elements
    left = 0;
    right = (k % n) - 1;
    reverse(arr , left , right);

    // second reversing to reverse the element k to n-1
    left = (k % n);
    right = n -1 ;
    reverse(arr , left , right);

    // third reversing to reverse whole array;
    left = 0 ;
    right = n -1;
    reverse(arr , left , right);

} 


void swap(int& a , int& b){
    a = a + b;
    b = a - b;
    a = a - b;
}


void reverse(int arr[] , int left , int right){
    while(left < right  && left >= 0 && right >= 0){
        swap(arr[left] , arr[right]);
        left++;
        right--;

    }
}