#include<iostream>
#include<vector>
using namespace std;

vector<vector<float>> addition(vector<vector<float>>&m1, vector<vector<float>>&m2){
    if(m1.size() != m2.size() || m1[0].size() != m2[0].size()){
        cout << endl <<  "Matrix Dimentions must be same" << endl;
        return {{}};
    }
    for(int i = 0 ; i < m1.size() ; i++){
        for(int j = 0 ; j < m1[0].size() ;j++){
            m1[i][j] += m2[i][j];
        }
    }
    return m1;
}


vector<vector<float>> substract(vector<vector<float>>&m1, vector<vector<float>>&m2){
    if(m1.size() != m2.size() || m1[0].size() != m2[0].size()){
        cout << endl <<  "Matrix Dimentions must be same" << endl;
        return {{}};
    }
    for(int i = 0 ; i < m1.size() ; i++){
        for(int j = 0 ; j < m1[0].size() ;j++){
            m1[i][j] -= m2[i][j];
        }
    }
    return m1;
}

vector<vector<float>> multiply(vector<vector<float>>&m1, vector<vector<float>>&m2){
    if(m1[0].size() != m2.size()){
        cout << endl <<  "Matrix Dimentions is not compatible for multiply" << endl;
        return {{}};
    }
    vector<vector<float>>result(m1.size(),vector<float>(m2[0].size(),0));
    for(int i = 0 ; i < m1.size() ; i++){
        for(int j = 0 ; j < m2[0].size() ; j++){
            int temp = 0;
            for(int k = 0 ; k < m1[0].size() ; k++){
                temp = temp + m1[i][k] * m2[k][j];
            }
            result[i][j] += temp;
        }
    }
    return result;
}
vector<vector<float>> transpose(vector<vector<float>>& m1){
    vector<vector<float>> trans(m1[0].size(), vector<float>(m1.size()));
    for(int i = 0 ; i < m1.size() ; i++){
        for(int j = 0 ; j < m1[0].size() ; j++){
            trans[j][i] = m1[i][j];
        }
    }
    return trans;
}

vector<vector<float>> input_matrix(){
    int row, col;
    cout << "Enter The number of row of the matrix " << endl;
    cin >> row;
    cout << "Enter the number of columns of the matrix" << endl;
    cin >> col;
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

void choice_menu(){
    cout << endl << endl;
    cout << "Enter your choice number " << endl << endl;
    cout << "1.additon " << endl;
    cout << "2.substraction" << endl;
    cout << "3. multiplication" << endl;
    cout << "4. Transpose of Matrix" << endl;
    cout << "5. Exit";
    cout << endl << endl;
}

int main(){
    int choice;
    while(true){
        choice_menu();
        cin >> choice;
        if(choice == 5){
            break;
        }
        else if(choice == 4){
            cout << "Enter Matrix 1" << endl;
            vector<vector<float>> m1 = input_matrix();
            cout << endl << "your matrix " << endl;
            print_matrix(m1);
            vector<vector<float>> trans = transpose(m1);
            print_matrix(trans);
            continue;
        }
        else if(choice > 5 && choice < 1){
            cout << "Pleases Enter vaild choice";
            continue;
        }
        cout << "Enter Matrix 1" << endl;
        vector<vector<float>> m1 = input_matrix();
        cout << "Enter Matrix 2" << endl;
        vector<vector<float>> m2 = input_matrix();
        cout << endl << endl << "Your matrix 1" << endl;
        print_matrix(m1);
        cout << endl << "Your matrix 2" << endl;
        print_matrix(m2); 

        if(choice == 1){
            // additon
            vector<vector<float>> result = addition(m1,m2);
            cout << endl << "The addition of The matrix";
            print_matrix(result);
            continue;
        }
        else if(choice == 2){
            // substraction
            vector<vector<float>> result = substract(m1,m2);
            cout << endl << "The substraction of The matrix";
            print_matrix(result);
            continue;
        }
        else if(choice == 3){
            // multiplication
            vector<vector<float>> result = multiply(m1,m2);
            cout << endl << "The multiplication of The matrix";
            print_matrix(result);
            continue;
        }

    }
}