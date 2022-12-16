#include<iostream>
using namespace std;

int main() {
    string str1 = "riya";
    string str2 = "paras";
    
    for(int i = 0; i<str1.size(); i++){
        for(int j = 0; j<str2.size(); j++){
            if((str1[i] == str2[j]) && str1[i] != '0' && str2[j] != '0'){
                str1[i] = '0';
                str2[j] = '0';
            }
        }
    }
    
    for(int i = 0; i<str1.size(); i++){
        if(str1[i] != '0'){
            cout<<str1[i]<<" ";
        }
    }
    
    for(int i = 0; i<str2.size(); i++){
        if(str2[i] != '0'){
            cout<<str2[i]<<" ";
        }
    }

    return 0;
}