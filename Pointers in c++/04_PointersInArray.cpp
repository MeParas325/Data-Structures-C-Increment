#include<iostream>
using namespace std;

int main(){

    int arr[4];

    // arr = arr + 1; //this will give you an error
    int *ptr = arr;
    cout << "Value in ptr before changing is: " << ptr << endl;
    ptr = ptr + 1;
    cout << "Value in ptr after changing is: " << ptr << endl;

}