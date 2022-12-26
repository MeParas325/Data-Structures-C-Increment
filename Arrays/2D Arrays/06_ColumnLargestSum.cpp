//find the largest column sum
#include<iostream>
using namespace std;

int largestColumnSum(int arr[][4], int n, int m){

    int maxSum = INT_MIN;

    int sum = 0;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            sum += arr[j][i];
        }
        cout << endl;
        cout << sum;
        if(maxSum < sum){
            maxSum = sum;
        }
        sum = 0;
    }

    return maxSum;
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

    int maxColumnSum = largestColumnSum(arr, 3, 4);
    cout << endl << "largest column sum is: " << maxColumnSum;

}