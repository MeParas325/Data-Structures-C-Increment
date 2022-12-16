#include<iostream>
using namespace std;

int main(){

    int n = 5, m = 23, count = 0;

    while(n != 0 || m != 0){
        if((n & 1) != 0){
            count++;
        }
        if((m & 1) != 0){
            count++;
        }

        n = n >> 1;
        m = m >> 1;

        cout<<"Number of bits in both numbers: "<<count;
    }
}