//Remove substring from any given string
#include<iostream>
using namespace std;

string removeString(string s, string part){

    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main(){

    string s = "daabcabcfjdbcabca";

    s = removeString(s, "abc");

    cout << s;

}