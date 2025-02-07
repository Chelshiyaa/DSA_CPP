#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return ((n%10)+sum(n/10));
}
int Pro(int n){
    if(n%10==n) return n;
    return ((n%10)* Pro(n/10));
}
int reverse(int n){
    if(n==0) return 0;
    return (n%10)+reverse();
}
int main(){
    int n=1342;
    int sum1=sum(n);
    int pro1=Pro(n);
    int rev1=reverse(n);
    cout<<rev1<<endl;
    cout<<pro1<<endl;
    cout<<sum1;
}