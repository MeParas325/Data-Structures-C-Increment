//find the largest column sum
#include<iostream>
using namespace std;

void wavePrint(int arr[][4], int nRows, int mCols){

    for(int col = 0; col < mCols; col++){
        if(col&1){
            for(int row = nRows - 1; row >= 0; row--){
                cout << arr[row][col] << " ";
            }
        }else{
            for(int row = 0; row < nRows; row++){
                cout << arr[row][col] << " ";
            }
        }
    }
}


int main(){

    int arr[3][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[j][i];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    wavePrint(arr, 3, 4);

}