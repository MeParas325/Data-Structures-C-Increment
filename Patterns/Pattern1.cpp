#include<iostream>
using namespace std;

int main(){
    int i = 1, j = 1;

    while(i<=4){
        while(j<=4){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        j = 1;
        i++;

    }
        
}