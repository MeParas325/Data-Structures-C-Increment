//Find the array is sorted or not using recursion
#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int i){

    if(i == n - 1 || n == 0 || n == 1){
        return true;
    }
    
    if(arr[i] < arr[i + 1]){
         bool val = isSorted(arr, n, ++i);
         return val;
    }else{
        return false;
    }
}

int main(){

    int arr[] = {1, 2, 3, 40, 5};

    cout << isSorted(arr, 5, 0) << endl;
}