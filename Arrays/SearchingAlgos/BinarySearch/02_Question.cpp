//Find the first and last occureace of an element in an sorted array using binary search
#include<iostream>
using namespace std;

int findOcc1(int arr[], int size, int key){
    int start = 0, end = size - 1, ans = -1;

    while(start<=end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return ans;

}


int findOcc2(int arr[], int size, int key){
    int start = 0, end = size - 1, ans = -1;

    while(start<=end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return ans;

}



int main(){

    int arr[] = {1, 2, 3, 3, 3, 3, 3, 3, 4, 5, 6, 6, 7, 7};

    cout<<"First occurence of element is:"<<findOcc1(arr, 14, 7)<<endl;
    cout<<"Last occurence of element is:"<<findOcc2(arr, 14, 7)<<endl;
}