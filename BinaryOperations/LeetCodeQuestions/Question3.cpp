#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number you want to check power of 2 or not: ";
    cin>>n;

    int m = 1;

    while(m<n && m!=n){
        m = m<<1;
    }

    if(m == n)
        cout<<n<<" is the power of 2.";
    else
        cout<<n<<" is not the power of 2.";
    
}