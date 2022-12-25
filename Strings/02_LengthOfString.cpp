#include<iostream>
using namespace std;

int lengthOfName(char name[]){
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){

    char name[30];

    cout << "Enter your name: " << endl;
    cin >> name;

    cout << endl << "Length of string is: " << lengthOfName(name);
}