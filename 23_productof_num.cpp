#include<iostream>
using namespace std;

int main(){
    int n,i,product=1;

    cout<<"Enter a number for n:";
    cin>>n;

    for(i=1;i<=n;i++){
        product*=i;
    }
    cout<<"The product of first "<<n<<" natural numbers = "<<product<<endl;
}