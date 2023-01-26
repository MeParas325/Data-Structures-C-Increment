#include<iostream>
using namespace std;

int score = 24;

void printScore(){

    cout << score << endl;

}

int main(){

    int i = 4;

    {
        int i = 2;
        cout << i << endl;
    }

    cout << score << endl;
    printScore();
    score++;
    cout << score << endl;
    printScore();
}