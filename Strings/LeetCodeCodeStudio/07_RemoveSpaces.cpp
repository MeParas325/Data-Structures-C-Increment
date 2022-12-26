//Remove the occuring spaces in the given string and replace them with @40

#include<iostream>
using namespace std;

string removeSpaces(string s){

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            for(int j = i; j < s.length(); j++){
                s[j] = s[j + 3];
            }
            s[i] = '@';
            s[i + 1] = '4';
            s[i + 2] = '0';
        }
    }
    return s;

}

int main(){

    string s = "my name is tanuja";

    s = removeSpaces(s);

    cout << s;
}