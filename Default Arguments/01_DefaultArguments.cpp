#include<iostream>
using namespace std;

void printArray(int arr[], int n, int start = 0){

    for(int i = start; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {1, 2, 4, 6, 78};
    printArray(arr, 5, 4);
}