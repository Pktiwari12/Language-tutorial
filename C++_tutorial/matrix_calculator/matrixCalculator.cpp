#include<iostream>
#include<vector>
using namespace std;

// This takes unlimited matrix. and perform operation in their order
// write algoritym for multplication. Matrix Chain Multiplication and Strassen matrix multiplication are
// used for optimization.

vector<vector<float>> input_matrix(int row, int col){
    vector<vector<float>>matrix(row,vector<float>(col));
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout << "Enter the value for row  " << i+1 << "column " << j+1;
            cin >> matrix[i][j];
        }
    }
    return matrix;
}




void print_matrix(vector<vector<float>>& matrix){
    cout << endl;
    // cout << "Your matrix is " << endl << endl;
    for(int i = 0 ; i< matrix.size() ;i++){
        for(int j = 0 ; j < matrix[i].size() ;j++){
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}





vector<vector<float>> addition(vector<vector<vector<float>>>& mat_matrix){
    vector<vector<float>> final_mat(mat_matrix[0].size(), vector<float>(mat_matrix[0][0].size(),0));
    for(int i = 0 ; i < mat_matrix.size()-1 ; i++){
        if(mat_matrix[i].size() != mat_matrix[i+1].size() || mat_matrix[i][0].size() != mat_matrix[i+1][0].size()){
            return {{}};
        }
        for(int j = 0 ; j < mat_matrix[i].size() ; j++){
            vector<float> temp;
            for(int k = 0 ; k < mat_matrix[i][0].size(); k++){
                final_mat[j][k] += mat_matrix[i][j][k] + mat_matrix[i+1][j][k];
                // temp.push_back(val);
            }
            // final_mat.push_back(temp);
        }
        
            if(mat_matrix.size() - (i+2) > 1){
                i++;        // move to next to next matrix
                continue;
            }
            else if ( ( mat_matrix.size() - (i+2) ) == 1){
                // only one matrix is left
                if(mat_matrix[i].size() != mat_matrix[i+2].size() || mat_matrix[i][0].size() != mat_matrix[i+2][0].size()){
                    return {{}};
                }
                for(int j = 0 ; j < mat_matrix[i+2].size() ; j++){
                    for(int k = 0 ; k < mat_matrix[i+2][0].size() ; k++){
                        final_mat[j][k] += mat_matrix[i+2][j][k];
                    }
                }
                break;
            }
            else{
                break;
            }
    }
    return final_mat;
}

vector<vector<float>> substraction(vector<vector<vector<float>>>& mat_matrix){
    vector<vector<float>> final_mat(mat_matrix[0].size(), vector<float>(mat_matrix[0][0].size(),0));
    for(int i = 0 ; i < mat_matrix.size()-1 ; i++){
        if(mat_matrix[i].size() != mat_matrix[i+1].size() || mat_matrix[i][0].size() != mat_matrix[i+1][0].size()){
            return {{}};
        }
        for(int j = 0 ; j < mat_matrix[i].size() ; j++){
            vector<float> temp;
            for(int k = 0 ; k < mat_matrix[i][0].size(); k++){
                final_mat[j][k] += mat_matrix[i][j][k] - mat_matrix[i+1][j][k];
                // temp.push_back(val);
            }
            // final_mat.push_back(temp);
        }
        
            if(mat_matrix.size() - (i+2) > 1){
                i++;        // move to next to next matrix
                continue;
            }
            else if ( ( mat_matrix.size() - (i+2) ) == 1){
                // only one matrix is left
                if(mat_matrix[i].size() != mat_matrix[i+2].size() || mat_matrix[i][0].size() != mat_matrix[i+2][0].size()){
                    return {{}};
                }
                for(int j = 0 ; j < mat_matrix[i+2].size() ; j++){
                    for(int k = 0 ; k < mat_matrix[i+2][0].size() ; k++){
                        final_mat[j][k] -= mat_matrix[i+2][j][k];
                    }
                }
                break;
            }
            else{
                break;
            }
    }
    return final_mat;
}



int main(){
    int row,col;
    // cout << "You can enter only max two matrix " << endl;
    int check = 1;
    int count = 1;
    vector<vector<vector<float>>> mat_of_matrix;
    while(true){
        cout << "Enter 1 to enter matrix otherwise enter any number " << endl;
        cin >> check;
        if(check != 1){
            break;
        }
        cout << "Enter The dimention of matrix  " << count << endl;
        cout << "Enter the  number of rows" << endl;
        cin >> row;
        cout << "Enter the number of columns" << endl;
        cin >> col;
        vector<vector<float>> matrix = input_matrix(row, col);
        mat_of_matrix.push_back(matrix);
        count++;
    }
    for(int i = 0 ; i < mat_of_matrix.size() ; i++){
        cout << "Your matrix  " << i+1 << endl;
        print_matrix(mat_of_matrix[i]);

    }
    cout << "Final Matrix of Addition" << endl << endl;
    vector<vector<float>> added_mat = addition(mat_of_matrix);
    print_matrix(added_mat);

    cout << "Final Matrix of Substraction " << endl << endl;
    vector<vector<float>> sub_mat = substraction(mat_of_matrix);
    print_matrix(sub_mat);

}