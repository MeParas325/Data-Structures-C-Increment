#include<iostream>
using namespace std;

int main(){

    char name[10];

    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Your name is: " << name;

    name[4] = '\0';

    cout << endl << "Your name is: " << name;
}