//Find the square root of any number using binary search upto 3 decimal
#include<iostream>
using namespace std;

int sqrtInt(int n){

    int s = 0;
    int e = n;

    int mid = s + (e - s)/2;
    int ans;

    while(s <= e){

        if(mid * mid == n){
            return mid;
        }
        else if(mid * mid < n){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }

    return ans;
}

double morePrecision(int n, int precision, int tempSol){

    double ans = tempSol;
    double factor = 1;

    for(int i = 0; i < precision; i++){
        factor = factor / 10;
        for(double j = ans; j * j < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}


int main(){
    int n;

    cout<<"Enter any number:"<<endl;
    cin>>n;
    
    int tempSol = sqrtInt(n);
    cout<<morePrecision(n, 3, tempSol);
    

}