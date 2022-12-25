//Remove the occuring spaces in the given string

#include<iostream>
using namespace std;

string removeSpaces(string s){

    string temp = "";

    for(int i = 0; i < s.length(); i++){

        if(s[i] != ' '){
            temp.push_back(s[i]);
        }

    }

    return temp;
}

int main(){

    string s = "my name is tanuja";

    s = removeSpaces(s);

    cout << s;
}