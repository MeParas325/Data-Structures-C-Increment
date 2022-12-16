#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    int i = 0; 
    cout<<"Array Size is:"<<sizeof(arr)/sizeof(int);
    while(i<n){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i+=2;
    }
}

int main(){

    int arr[] = {1, 2, 4, 6, 7, 8};

    cout<<"Before swapping array is:"<<endl;
    for(int i = 0; i<sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<" ";
    }

    swapAlternate(arr, 6);

    cout<<endl<<"After swapping array is:"<<endl;
    for(int i = 0; i<sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<" ";
    }
}