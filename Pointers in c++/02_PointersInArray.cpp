#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1, 4, 5, 22, 53};

    cout << "address of first memory block is: " << arr << endl;
    cout << "address of first memory block is: " << &arr << endl;
    cout << "address of first memory block is: " << &arr[0] << endl;

    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "5th " << *(arr + 1) << endl;
    cout << "5th " << *(arr) + 1 << endl;
}