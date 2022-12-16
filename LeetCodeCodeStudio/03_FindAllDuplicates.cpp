#include<bits/stdc++.h>
using namespace std;

void findAllDuplicates(int arr[], int size){
    sort(arr, arr + size);

    vector<int> newArr;

    for(int i = 0; i<size - 1; i++){
        if(arr[i] == arr[i+1]){
            newArr.push_back(arr[i]);
        }
    }

    for(int i = 0; i<newArr.size(); i++){
        cout<<newArr[i]<<" ";
    }

    
}

int main(){

    int arr[] = {6, 3, 4, 6, 2, 3};
    findAllDuplicates(arr, 6);
}