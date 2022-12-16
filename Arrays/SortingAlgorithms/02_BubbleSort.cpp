#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n){

    for(int i = 0; i < n; i++){
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++){
  
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false){
            return;
        }
    }
}
int main(){

    int arr[] = {90, 6, 2, 1, 468, 23};
    // int arr[] = {1, 2, 6, 23, 90, 468};

    cout << "Array before bubble sort:\n";
    printArray(arr, 6);

    cout << "\nArray after bubble sort:\n";
    bubbleSort(arr, 6);
    printArray(arr, 6);


}