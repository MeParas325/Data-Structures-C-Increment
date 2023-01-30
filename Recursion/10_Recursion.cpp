//sort an array using bubble sort by using recursion
#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void sortArray(int arr[], int size){

    if(size == 0){
        cout << "Array is empty." << endl;
        return;
    }

    for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }

    sortArray(arr, size - 1);
}

int main(){

    int arr[] = {4, 6, 56, 12, 6, 78};

    cout << "Array before sorting: " << endl;
    printArray(arr, 6);
    sortArray(arr, 6);
    cout << "Array after sorting: " << endl;
    printArray(arr, 6);
    
}