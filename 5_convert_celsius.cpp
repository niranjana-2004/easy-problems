#include<iostream>
using namespace std;

int main(){
    int cel,fah;

    cout<<"Enter temperature in celsius:";
    cin>>cel;

    fah=(cel*9.0/5.0)+32;
    cout<<"Temperature in Fahrenheit: "<<fah<<endl;
    return 0;
}