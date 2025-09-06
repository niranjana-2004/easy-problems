#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,avg;

    cout<<"Enter the number 1: ";
    cin>>num1;

    cout<<"Enter the number 2: ";
    cin>>num2;

    cout<<"Enter the number 3: ";
    cin>>num3;

    avg=(num1+num2+num3)/3;
    cout<<"Average of three numbers = "<<avg<<endl;
    return 0;
}