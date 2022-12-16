#include<iostream>
using namespace std;

int main(){

    char ch = 'A';

    for(int i = 0; i<4; i++){
        char ch2 = ch + 4 - i - 1;
        for(int j = 0; j<=i; j++){
            cout<<ch2++<<" ";
        }
        cout<<endl;
    }
}