#include<iostream>
using namespace std;

int main(){

    int i = 4;
    int& j = i;
    cout << i << " - " << j << endl;

    i++;
    cout << i << endl;
    j++;
    cout << i << " - " << j << endl;
}