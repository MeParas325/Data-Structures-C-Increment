#include <iostream>
using namespace std;

int main(){

    int i = 0;
    i = i + 1;
    cout << i << " ";
    // /*comment/*//i = i + 1; This will give you an error
    /*comment*/i = i + 1; //This will not give you any error
    cout << i;
    printf(" %d ", i);
}