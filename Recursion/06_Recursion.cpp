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
        return searchElement(arr, mid + 1, end, key);
    }
    else {
        return searchElement(arr, start, mid - 1, key);
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