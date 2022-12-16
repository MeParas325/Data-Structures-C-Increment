#include<iostream>
using namespace std;

int main(){

    int arr[] = {5, 3, 7, 2, 8, 77, 3};
    int min = arr[0], max = arr[0];

    for(int i = 0; i<sizeof(arr)/sizeof(int); i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<"Maximum is: "<<max<<", Minimum is: "<<min;
}