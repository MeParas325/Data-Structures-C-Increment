#include<iostream>
using namespace std;

int main(){

    char ch = 'A';

    for(int i = 0; i<3; i++){
        for(int j = 0; j<=i; j++){
            char ch2 = ch + i;
            cout<<ch2<<" ";
        }
        cout<<endl;
    }
}