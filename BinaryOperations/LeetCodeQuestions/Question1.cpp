#include<iostream>
using namespace std;

int main(){

    int n, answer = 0;
    cout<<"Enter the number: ";
    cin>>n;

    while(n != 0){
        int lastDigit = n % 10;
        if(answer > INT_MAX / 10 || answer < INT_MIN/10){
            break;
        }
        answer = (answer * 10) + lastDigit;
        n = n / 10;
    }
    cout<<"Answer is: "<<answer;
}