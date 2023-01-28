//find the sum of an array using recursion
#include<iostream>
using namespace std;

int arrSum(int arr[], int size){

    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }

    int remainingPart = arrSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main(){

    int arr[] = {1, 2, 5, 7, 3, 76};

    cout << arrSum(arr, 6) << endl;
}