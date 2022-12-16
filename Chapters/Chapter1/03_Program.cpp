#include<iostream>
using namespace std;

int main(){

    int m = 5; //n = 10; //s = m + n;
    cout << m << endl;

    int x, y;

    // cin >> x; >> y; This will give you error because of semicolumn
    cin >> x >> y; //This will not give you any error
    cout << x << " " << y;

    // cout << \n"Name:" << name; This will also give you error

    int value;
    cout << "\nEnter value:"; cin >> value;
    cout << value << endl;

    /*Addition*/int z = 4 + 3;
    cout << z;


}