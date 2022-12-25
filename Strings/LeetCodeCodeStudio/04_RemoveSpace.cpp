//Remove the occuring spaces in the given string and replace them with @40

#include<iostream>
using namespace std;

string removeSpaces(string s){

    string temp = "";

    for(int i = 0; i < s.length(); i++){

        if(s[i] != ' '){
            temp.push_back(s[i]);
        }else{
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }

    }

    return temp;
}

int main(){

    string s = "my name is tanuja";

    s = removeSpaces(s);

    cout << s;
}