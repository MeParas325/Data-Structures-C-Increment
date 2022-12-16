#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int size){

    int s = 0, e = size - 1;

    while(s < e){

        while(arr[s] == 0){
            s++;
        }

        while(arr[e] == 1){
            e--;
        }

        if(s < e){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[6] = {1, 0, 1, 1, 0, 0};

    sortZeroOne(arr, 6);
    printArray(arr, 6);
}