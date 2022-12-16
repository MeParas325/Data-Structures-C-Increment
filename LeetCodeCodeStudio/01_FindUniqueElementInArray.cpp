#include<iostream>
using namespace std;

int uniqueElement(int arr[], int size){
    int ans = 0;

    for(int i = 0; i<size; i++)
        ans = ans ^ arr[i];


    return ans;
}

int main(){

    int arr[] = {1, 1, 4, 6, 5, 7, 5, 6, 7};

    cout<<uniqueElement(arr, 9);
}