#include<iostream>
using namespace std;

void binarySearch(int arr[], int size, int key){

    int s = 0, e = size - 1;

    while(s<=e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == key){
            cout<<"Element found at "<<mid<<" index";
            return;
        }else if(arr[mid] < key){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }

    if(s>e){
        cout<<"element is not found";
    }
}

int main(){

    int arr[] = {1, 4, 6, 8, 9, 68};

    binarySearch(arr, 6, 6);
}