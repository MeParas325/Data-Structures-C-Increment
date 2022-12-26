//Remove any permuation string of string2 which is a substring of string1
#include<iostream>
using namespace std;

string removeString(string str1, string str2){

    while(str1.length() != 0 && str1.find(str2) < str1.length()){
        str1.erase(str1.find(str2), str2.length());
    }

    return str1;
}

int main(){

    string str1 = "daabcabcfjdbcabca";
    string str2 = "fjd";

    str1 = removeString(str1, str2);

    cout << str1;

}