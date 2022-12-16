// Find the element in roatated array using binary search
#include<iostream>
using namespace std;

void getPivot(int arr[], int n, int target){

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;

    while(s < e){
        
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }else{
            e = mid;
        }

        mid = s + (e - s)/2;
    }

    int pivot = s;

    s = 0;
    e = n - 1;

    if(arr[pivot] <= target >= arr[e]){
        while(s < e){
            s = pivot;
            mid = s + (e - s)/2;
            if(arr[mid] == target){
                cout<<"Element fount at "<<mid<<" position";
                break;
            }else if(arr[mid] < target){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
        if(s >= e){
            cout<<"Element is not found";
        }
    }else if(arr[pivot - 1] >= target <= arr[0]){
        while(s < e){
            mid = s + (e - s)/2;
            e = pivot - 1;
            if(arr[mid] == target){
                cout<<"Element fount at "<<mid<<" position";
                break;
            }else if(arr[mid] < target){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
        if(s >= e){
            cout<<"Element is not found";
        }
    }else{
        cout<<"Element is not found";
    }
}

int main(){

    int arr[6] = {7, 8, 1, 3, 5, 6};
    getPivot(arr, 6, 7);
    
}