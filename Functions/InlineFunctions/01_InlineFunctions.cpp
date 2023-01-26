// It is used to reduce the function calls overhead
#include<iostream>
using namespace std;

inline int getMax(int& i, int& j){
    return (i > j) ? i : j;
}

int main(){

    int i = 2;
    int j = 4;

    cout << getMax(i, j) << endl;
}