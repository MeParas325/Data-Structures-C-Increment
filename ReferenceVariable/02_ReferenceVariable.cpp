#include<iostream>
using namespace std;

void updateFunc(int& n){
    n++;
}

int main(){

    int i = 3;

    updateFunc(i);
    cout << i;
}