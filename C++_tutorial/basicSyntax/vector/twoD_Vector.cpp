#include <iostream>
#include <vector>
using namespace std;




// function to create two dimention vector
vector<vector<int>> createTwoDArray(){
 vector<vector<int>> num;
    cout << "Enter the value to insert the value into the 2d vector" << "\n\n";
    int row_index = 0;
    int row_check;
    int val;

// Taking Input of 2D array
    while(true){
        cout << "Enter 1 to add values in row "<< row_index << "\n";
        cin >> row_check;
        if(row_check == 1){
            // Addint the row 
            num.push_back(vector<int>());
            while(true){
                // cole_index = 1;
                cout << "Enter values to add otherwise enter -1 \t";
                cin >> val;
                if(val == -1){
                    break;
                }else{
                    num[row_index].push_back(val);
                    
                }

            }
        }else{
            break;
        }
        row_index++;
    }
return num;
}




// printing the two dimentional vector
void printTwoDArray(vector<vector<int>> num){
    for (int i = 0 ; i < num.size() ; i++  ){
        for (int j = 0 ; j< num[i].size() ; j++){
            cout << num.at(i).at(j) << "\t";
        }
        cout << endl;
    }
}






int main(){
    vector<vector<int>> num = createTwoDArray();
    cout << "The 2-d array" << "\n\n\n";
    printTwoDArray(num);
   
return 0;


}



// sorting 
















