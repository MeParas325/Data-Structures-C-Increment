//Find the sum of two arrays
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v1){

    int s = 0;
    int e = v1.size() - 1;

    while(s < e)
        swap(v1[s++], v1[e--]);

    return v1;
        
}

vector<int> addArrays(vector<int> v1, vector<int> v2){

    int i = v1.size() - 1;
    int j = v2.size() - 1;

    int carry = 0;

    vector<int> v3;

    while(i >= 0 && j >= 0){

        int sum = v1[i] + v2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        v3.push_back(sum);
        i--;
        j--;
        
    }

    while(i >= 0){

        int sum = v1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        v3.push_back(sum);
        i--;

    }

    while(j >= 0){
        
        int sum = v2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        v3.push_back(sum);
        j--;

    }

    while(carry != 0){

        int sum = carry;
        carry = sum / 10;
        v3.push_back(sum);

    }

    return reverse(v3);
}


int main(){

    vector<int> v1{1, 3, 7, 3, 76};
    vector<int> v2{1, 3, 7};
    vector<int> v3{1, 3, 7, 3, 64, 23, 47, 23};
    vector<int> v4{45, 7, 3, 7, 3};

    vector<int> v5 = addArrays(v1, v2);

    for(int i = 0; i < v5.size(); i++){
        cout << v5[i] << " ";
    }


}