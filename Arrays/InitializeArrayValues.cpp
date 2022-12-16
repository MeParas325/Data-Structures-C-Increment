#include<iostream>
using namespace std;

int main(){

    int arr[100];

    std::fill_n(arr, 100, -1);

    for(int i = 0; i<sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<" ";
    }    
}