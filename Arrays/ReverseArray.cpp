#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);

    cout<<"Before reversing array is:"<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i = 0; i<size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    cout<<endl<<"After reversing array is:"<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }   
}