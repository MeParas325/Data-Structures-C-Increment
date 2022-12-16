#include<iostream>
using namespace std;

void findDuplicate(int arr[], int size){

    int ans = 0;

    for(int i = 0; i<size; i++){
        ans = ans ^ arr[i];
    }

    for(int i = 1; i<size; i++){
        ans = ans ^ i;
    }

    cout<<"Duplicate element present in the array is:"<<ans;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 3};
    int size = 7;

    findDuplicate(arr, size);
}