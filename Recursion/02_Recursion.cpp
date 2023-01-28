//Find the sum of an array using recursion
#include<iostream>
using namespace std;
int sum = 0;
int add(int arr[], int n, int i){

    if(n == 0 || n == 1){
        return sum + arr[0];
    }

    if(i == n){
        return sum;
    }

    sum += arr[i];
    add(arr, n, ++i);
    return sum;
}

int main(){

    int arr[] = {1, 2, 6, 34, 78};

    cout << "Sum is: " << add(arr, 5, 0) << endl;
}