//reverse the string using recursion
#include<iostream>
using namespace std;

void reverseString(string str, int n){

    if(n == -1 || n == 0){
        return;
    }

    cout << str[n - 1];

    reverseString(str, n - 1);

}

int main(){

    string str = "dsf";

    reverseString(str, str.length());
}