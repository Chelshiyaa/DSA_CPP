#include<iostream>
using namespace std;
int trailingzero(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+n/i;
    }
    return res;
}
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Number of zeros in "<<x<<" are "<<trailingzero(x);
}