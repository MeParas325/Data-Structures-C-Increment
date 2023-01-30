//find the string is palindrome or not using recursion
#include<iostream>
using namespace std;

bool palindromeString(string str, int i, int j){

    if(j == 0){
        return false;
    }

    if(j == 1 || i > j)
        return true;

    if(str[i] == str[j - 1]) return palindromeString(str, ++i, --j);
    else return false;
}

int main(){

    string str = "addddadddda";

    cout << palindromeString(str, 0, str.length()) ? "String is palindrome." : "String is not palindrome.";
}