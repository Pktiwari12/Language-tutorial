    // finding the index of character if a vector size 26 (0 - 25) => (a - z)
    #include<iostream>
    #include<vector>
    using namespace std;

    int main(){
        vector<int>alph(26,0);
        cout << 'z'-'a'<< endl;
        // count frequency of string
        string str = "ram";
        cout << str[1]-'a' << endl;
        for(char ch : str){
            alph[ch - 'a']++;
        }
        // cout << "hi" << endl;
        // rpint
        for(int i = 0 ; i < alph.size() ; i++){
            cout << char(i + 'a') << "\t" << alph[i] << endl;
        }
    } 