//Find square root of any number using binary search
#include<iostream>
using namespace std;

int binarySearch(int n){

    int s = 0;
    int e = n;
    int ans;

    int mid = s + (e - s)/2;
    while(s <= e){
        
        if(mid * mid == n){
            return mid;
        }
        else if(mid * mid > n){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e - s)/2;
    }

    return ans;
}

int main(){

    int value = binarySearch(37);
    
    cout<<"Square root is: "<<value;
    
}