// find the palindrome string of a given string without including the special characters and whitespaces
#include<iostream>
using namespace std;

int validChar(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
        return 1;
    }
    return 0;
    
}

char convertChar(char c){
    if(c >= 'A' && c <= 'Z'){
        return c - 'A' + 'a';
    }
    return c;
}

bool checkPalindrome(string s)
{
    string temp = "";
    
    for(int i = 0; i < s.size(); i++){
        if(validChar(s[i])){
            temp.push_back(s[i]);
        }
    }

    cout << temp;
    
    int start = 0;
    int end = temp.size() - 1;
    
    while(start < end){
        if(convertChar(temp[start++]) != convertChar(temp[end--])){
            return false;  
        }
    }
    return true;
}

int main(){
    
    string s = "c1 O$d@eeD o1c";
    if(checkPalindrome(s)){
        cout << endl << "Yes";
    }else{
        cout << endl << "No";
    }
}