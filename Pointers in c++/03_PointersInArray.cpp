#include<iostream>
using namespace std;

int main(){

    int temp[10] = {1, 2, 56, 234, 535};

    int i = 4;

    cout << i[temp] << endl;

    cout << "1st " << sizeof(temp) << endl;
    cout << "2nd " << sizeof(*temp) << endl;
    cout << "3rd " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << "4th " << sizeof(ptr) << endl;
    cout << "5th " << sizeof(*ptr) << endl;
    cout << "6th " << sizeof(&ptr) << endl;


}