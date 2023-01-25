#include<iostream>
using namespace std;

int& updateFunc(int n){
    
    int& ans = n;
    return ans;
}

int main(){

    int i = 3;

    cout << updateFunc(i) << endl;
}