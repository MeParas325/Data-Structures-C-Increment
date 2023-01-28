//implement binary search using binary search
#include<iostream>
using namespace std;

bool searchElement(int arr[], int start, int end, int key){

    if(start > end){
        return false;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid] < key){
        start = mid + 1;
        bool remaining = searchElement(arr, start, end, key);
        return remaining;
    }
    else {
        end = mid - 1;
        bool remaining = searchElement(arr, start, end, key);
        return remaining;
    }

}

int main(){

    int arr[] = {1, 3, 5, 6, 78};

    if(searchElement(arr, 0, 4, 90)){
        cout << "Element is found";
    }else{
        cout << "Element is not found";
    }


}