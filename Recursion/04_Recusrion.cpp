//Find an element in an linear array using recursion
#include<iostream>
using namespace std;

int searchElement(int arr[], int size, int key){
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }else{
        bool remainingPart = searchElement(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main(){

    int arr[] = {1, 4, 57, 79, 99};
    cout << searchElement(arr, 5, 999);
}
