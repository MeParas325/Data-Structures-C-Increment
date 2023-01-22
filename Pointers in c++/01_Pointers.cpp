#include<iostream>
using namespace std;

int main(){

    int i = 10, j = 30;

    int *p = &i, *q = &j;

    cout << "Values in pointers are: " << *p << " - " << *q << endl;
    cout << "Addresses in pointers are: " << p << " - " << q << endl;
    cout << "Addresses of pointers are: " << &p << " - " << &q << endl;

    q = q + 1;
    cout << "Addresss in q is: " << q << endl;
    cout << "Value in q is: " << *q << endl;

    *q = *q + 5;
    cout << "Value in q is: " << *q << endl;
    cout << "Value in p is: " << *p << endl;

    (*p)++;
    cout << "Value in q is: " << *q << endl;
    cout << "Value in p is: " << *p << endl;

    cout << "Size of pointers are: " << sizeof(p) << " - " << sizeof(q);



}