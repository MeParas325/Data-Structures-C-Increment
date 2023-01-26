#include<iostream>
using namespace std;

int main(){

    int **arr = new int*[3];

    for(int i = 0; i < 3; i++){
        arr[i] = new int[2];
    }

    // Taking input
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cin >> arr[i][j];
        }
    }

    // Printing output
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Releasing the memory
    for(int i = 0; i < 3; i++){
        delete []arr[i];
    }
    delete []arr;





}