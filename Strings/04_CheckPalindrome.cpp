#include<iostream>
using namespace std;

int getLength(char str[]){

    int count = 0;

    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }

    return count;
}

bool checkPalindrome(char str[]){
    int s = 0;
    int e = getLength(str) - 1;

    while(s < e){
        if(str[s++] != str[e--]){
            return 0;
            break;
        }
    }

    return 1;

}

int main(){

    char str[10];

    cout << "Enter any string: " << endl;
    cin >> str;

    if(checkPalindrome(str)){
        cout << "String is palindrome.";
    }else{
        cout << "String is not palindrome.";
    }

    
}