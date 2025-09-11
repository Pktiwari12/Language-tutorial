#include<sstream>
#include<iostream>
using namespace std;

int main(){
    string str1 = "Hello , Pradeep , Kumar , Tiwari";
    stringstream ss;
    ss << str1;
    string buffer;
    while(getline(ss, buffer, ',')){        // when comma encounter , the reading pointer of getline for ss  is assigned ot eof flag
        cout << buffer << "\t";
    }
    cout << endl;
    string str2 = "Kumar , Tiwari, garautha";
    ss << str2;
    // since we inserting string , but reding pointer is already eof
    // therefor str2 is not printed

    while(getline(ss,buffer,',')){
        cout << buffer << "\t" ;
    }

    // we have to clear ss
    ss.clear();     // clear the eof flag
    // ss.str("");
    ss << str2;

    // now  str2  prints 
    while(getline(ss, buffer, ',')){
        cout << buffer << "\t";
    }

}