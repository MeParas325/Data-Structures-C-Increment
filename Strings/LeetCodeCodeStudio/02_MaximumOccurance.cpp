//Find the maximum occurance character in an string

#include<iostream>
using namespace std;

char getMaxiOccurance(string str){

    int arr[26] = {0};

    for(int i = 0; i < str.length(); i++){

        int number = 0;
        char ch = str[i];
        number = ch - 'a';
        arr[number]++;

    }

    int maxi = -1, ans = -1;

    for(int i = 0; i < 26; i++){

        if(maxi < arr[i]){
            maxi = arr[i];
            ans = i;
        }

    }

    return 'a' + ans;

}

int main(){

    string str = "riya";

    cout << "Maximum occurance character is: " << getMaxiOccurance(str);
}