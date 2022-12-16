#include<iostream>
using namespace std;

int main(){

    char ch = 'A';
    int k = 1;

    for(int i = 0; i<5; i++){
        for(int j = 1; j<=5; j++){
            char ch2 = ch + j - 1 + i;
            cout<<ch2<<" ";
        }
        cout<<endl;
    }
}