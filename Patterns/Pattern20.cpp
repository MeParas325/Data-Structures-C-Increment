#include<iostream>
using namespace std;

int main(){

    int n = 4;
    int l = 1;

    for(int i = 1; i<=n; i++){
        //Print karao spaces
        for(int j = 1; j<=n; j++){
            if(j <= n-i){
                cout<<" ";
            }
        }

        //Print karao numbers pattern 1 me
        for(int k = 0; k<n; k++){
            if(k >= n-i){
                cout<<l++;
            }
        }
        l = 1;

        //Print karao numbers pattern2 me
        for(int m = i-1; m>=1; m--){
            if(m == 0){
                continue;
            }
            cout<<m;
        }
        cout<<endl;

    }
}