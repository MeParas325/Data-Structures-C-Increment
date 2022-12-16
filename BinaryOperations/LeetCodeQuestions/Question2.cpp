#include<iostream>
using namespace std;

int main(){

    int n = 4;
    int mask = 0, m = n;

    while(m != 0){
        mask = (mask<<1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout<<"Answer is: "<<ans;



}