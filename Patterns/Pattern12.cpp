#include<iostream>
using namespace std;

int main(){

    char ch = 'A';
    int count = 0;

    for(int i = 0; i<5; i++){
        for(int j = 0; j<=i; j++){
            char ch2 = ch + count++;
            cout<<ch2<<" ";
        }
        cout<<endl;
    }
}