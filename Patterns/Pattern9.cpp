#include<iostream>
using namespace std;

int main(){

    char ch = 'A';

    for(int i = 1; i<=3; i++){
        for(int j = 1; j<=3; j++){
            char ch2 = ch + j - 1;
            cout<<ch2<<" ";
        }
        cout<<endl;
    }
}