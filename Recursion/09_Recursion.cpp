//find a to the power b using recursion
#include<iostream>
using namespace std;

int powerFunc(int a, int b){

    if(b == 0)
        return 1;

    return a * powerFunc(a, b - 1);
}

int main(){
    
    int a = 6, b = 4;

    cout << a << " to the power of " << b << " is: " << powerFunc(a, b) << endl;
}