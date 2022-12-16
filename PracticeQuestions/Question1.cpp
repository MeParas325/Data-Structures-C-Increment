#include<iostream>
using namespace std;

int main(){

    int money;
    cout<<"Enter the money: ";
    cin>>money;

    int hundred = 100, fifty = 50, twenty = 20, one = 1;
    int hundredNote, fiftyNote, twentyNote, oneDollar;

    hundredNote = money / hundred;
    money = money - (hundredNote * hundred);

    fiftyNote = money / fifty;
    money = money - (fiftyNote * fifty);

    twentyNote = money / twenty;
    money = money - (twentyNote * twenty);

    oneDollar = money / one;
    money = money - (oneDollar * one);

    cout<<"Numer of hundred notes: "<<hundredNote<<endl;
    cout<<"Numer of fifty notes: "<<fiftyNote<<endl;
    cout<<"Numer of twenty notes: "<<twentyNote<<endl;
    cout<<"Numer of one dollar notes: "<<oneDollar<<endl;

    cout<<"Sum of all notes are: "<<(hundred * hundredNote) + (fifty * fiftyNote) + (twenty * twentyNote) + (one * oneDollar)<<endl;
    cout<<"Money left: "<<money;




}