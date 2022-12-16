//Find the toppest element in the mountain array

#include<iostream>
using namespace std;

void mountainElement(int arr[], int size){

    int s = 0, e = size - 1;

    while(s<e){

        int mid = s + (e - s) / 2;
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }else{
            e = mid;
        }
    }

    cout<<"Mountain element is: "<<arr[s];
}

int main(){

    int arr[] = {1, 2, 2, 4, 5, 7, 3, 2, 1};

    mountainElement(arr, 9);

    
}