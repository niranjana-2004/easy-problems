#include<iostream>
using namespace std;

int main(){
    int n,i,sum=0;

    cout<<"Enter a number for n:";
    cin>>n;

    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"The sum of first "<<n<<" natural numbers = "<<sum<<endl;
}