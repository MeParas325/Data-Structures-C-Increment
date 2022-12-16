#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n = 5;
    int answer = 0;
    int power = 0;

    while(n != 0){
        int bit = n & 1;
        n = n >> 1;

        answer = (bit * pow(10, power)) + answer;
        power++;
    }
    cout<<"Answer is: "<<answer;
}