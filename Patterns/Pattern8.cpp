#include<iostream>
using namespace std;

int main(){

    char ch = 'A';
    int i = 1, j = 1;

    while(i<=3){
        while(j<=3){
            char ch2 = ch + i - 1;
            cout<<ch2<<" ";
            j++;
        }
        cout<<endl;
        j = 1;
        i++;
    }
}