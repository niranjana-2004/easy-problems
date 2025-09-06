#include<iostream>
using namespace std;

int main(){
    float p,r,t,interest;

    cout<<"Enter the principle amount:";
    cin>>p;

    cout<<"Enter the interest rate:";
    cin>>r;

    cout<<"Enter the time:";
    cin>>t;

    interest=(p*r*t)/100;
    cout<<"Simple Interest: "<<interest<<endl;

    return 0;
}