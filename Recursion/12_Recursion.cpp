//sort an array with the help of selection sort by recursion
#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int n, int i){

    if(i == n - 1) return;

    int minIndex = i;
    for(int j = i + 1; j < n; j++){ 
        if(arr[j] < arr[minIndex]){
            minIndex = j;

        }
    }
    swap(arr[minIndex], arr[i]);

    selectionSort(arr, n, ++i);
}

int main(){

    int arr[] = {5, 3, 76, 2, 7, 1};

    cout<<"Before sorting array is: " << endl;
    printArray(arr, 6);

    cout << "\nAfter sorting array is: " << endl;
    selectionSort(arr, 6, 0);
    printArray(arr, 6);


    
}