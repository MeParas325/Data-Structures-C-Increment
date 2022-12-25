//place all the zeros in the right hand side in an array
#include<iostream>
using namespace std;

void collectZero(int arr[], int n){

    int nonZero = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }
}


void printArray(int arr[]){

    for(int i = 0; i < 9; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[] = {1, 0 , 1, 5, 7, 9, 0, 9, 4};
    printArray(arr);

    collectZero(arr, 9);
    cout<<endl;
    printArray(arr);

}