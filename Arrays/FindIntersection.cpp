#include<iostream>
using namespace std;

void findIntersection(int arr1[], int arr2[], int arr1Size, int arr2Size){
    
    
    for(int i = 0; i<arr1Size; i++){
        for(int j = 0; j<arr2Size; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" "<<endl;

            }
        }

    }
}

int main(){

    int arr1[] = {1, 3, 5, 8, 9};
    int arr2[] = {1, 5, 10};

    findIntersection(arr1, arr2, 5, 3);

}