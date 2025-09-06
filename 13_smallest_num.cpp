#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the number for a: ";
    cin>>a;

    cout<<"Enter the number for b: ";
    cin>>b;

    if(a<b){
        cout<<a<<" is the smallest number"<<endl;
    }
    else{
        cout<<b<<" is the smallest number"<<endl;
    }
    return 0;
}