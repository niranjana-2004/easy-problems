#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter the number for a: ";
    cin>>a;

    cout<<"Enter the number for b: ";
    cin>>b;

    cout<<"Enter the number for c: ";
    cin>>c;

    if(a>b && a>c){
        cout<<a<<" is the largest number"<<endl;
    }
    else if(b>c){
        cout<<b<<" is the largest number"<<endl;
    }
    else{
        cout<<c<<" is the largest number"<<endl;
    }
    return 0;
}