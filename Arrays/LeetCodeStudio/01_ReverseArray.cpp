//reverse an array with an specific index
#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> v1, int m){

    int s = m, e = v1.size() - 1;
    while (s < e)
    {
        swap(v1[s], v1[e]);
        s++;
        e--;
    }
}

void printArray(vector<int> v1){

    for(int i = 0; i<v1.size(); i++){
        cout << v1[i] << " ";
    }

}

int main(){

    vector<int> v1{4, 6, 2, 7, 1};

    cout << "Array before sorting:" << endl;
    printArray(v1);

    reverseArray(v1, 3);
    cout << endl << "Array after sorting:";
    printArray(v1);


    
}