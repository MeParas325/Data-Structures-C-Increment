#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter any number:";
    cin>>n;

    for(int i = 0; i<n; i++){
        // cout<<endl;
        for(int j = 0; j<n; j++){
            if(i == 0 || j == 0 || j == n - 1 || i == n - 1){
                cout<<"*";
            }else{
                cout<<" ";
            }
            if(j == n - 1){
                cout<<endl;
            }
        }
    }
}