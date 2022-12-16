#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findPairSum(int arr[], int size, int value){

    vector< vector<int> > newArr;

    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i] + arr[j] == value){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                newArr.push_back(temp);
            }
        }
    }

    for(int i = 0; i<newArr.size(); i++){
        std::cout<<newArr.at(i)<<" ";
    }


}

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    findPairSum(arr, 5, 5);

}

