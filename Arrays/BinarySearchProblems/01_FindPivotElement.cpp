// Find the pivot element in the rotated sorted array using binary search
#include<iostream>
using namespace std;

int getPivot(int arr[], int n){

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;

    while(s < e){

        if(arr[mid] >= arr[0])
            s  = mid + 1;
        else
            e = mid;

        mid = s + (e - s)/2;
    }

    return s;
}

int main(){

    int arr[7] = {8, 17, 100, 300, 5, 6, 7};

    cout<<"Pivot element is: "<<arr[getPivot(arr, 7)];
    
}