//make and sorted array a rotated array
#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> v1){
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
}

void rotateArray(vector<int> v1, int k){

    vector<int> temp(v1.size());

    for(int i = 0; i < v1.size(); i++){
        temp[(i + k) % v1.size()] = v1[i];
    }

    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << " ";
    }
}

int main(){

    vector<int> v1{1, 3, 6, 7, 90, 200};

    cout << "Array before rotating: " << endl;
    printArray(v1);

    cout << endl << "Array after rotating:\n";
    rotateArray(v1, 3);
    
}