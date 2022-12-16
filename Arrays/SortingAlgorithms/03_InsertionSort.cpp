#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0; j--){ 
            if(arr[j] > temp){
                arr[j + 1] = arr[j];

            }else{
                break;
            }
        }

        arr[j + 1] = temp;
        
    }
}

int main(){

    int arr[] = {5, 3, 76, 2, 7, 1};

    cout<<"Before sorting array is: " << endl;
    printArray(arr, 6);

    cout << "\nAfter sorting array is: " << endl;
    insertionSort(arr, 6);
    printArray(arr, 6);


    
}