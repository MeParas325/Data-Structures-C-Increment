#include<iostream>
using namespace std;

int main(){

    int arr[4];
    cout << "Integer array address is: " << arr << endl;

    char ch[4] = "bnd";
    cout << "Character array is: " << ch << endl;
    cout << "Character array address is: " << &ch << endl;

    char *c = &ch[0];
    cout << "Address of character array is: " << ch << endl;

    char ch2 = 'd';
    cout << "Value of ch2 is: " << ch2 << endl;

    char *temp = &ch2;
    cout << "Value of ch2 is: " << temp << endl;
    cout << "Address of ch2 is: " << &ch2 << endl;

}