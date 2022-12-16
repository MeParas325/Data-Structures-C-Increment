#include<iostream>
using namespace std;

int main(){
    int i = 1, j = 4;
    
    while(i<=4){
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        j = 4;
        i++;
    }
}