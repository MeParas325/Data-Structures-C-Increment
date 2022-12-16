#include <iostream>
using namespace std;

int main(){

    short i = 2500, j = 3000;
    // cout >> "i + j = " >> -(i+j); This line will give you error because here you use extraction operator instead of insertion operator
    cout << "i + j = " << -(i+j);

}