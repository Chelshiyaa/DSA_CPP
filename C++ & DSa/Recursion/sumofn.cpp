#include<iostream>
using namespace std;
// this code is parameterized
// void f(int n,int sum){
//     if(n<1){
//         cout<<sum;
//         return;
//     }
//     f(n-1,sum+n);
// }

// this code is functional
int f(int n){
    if(n==0) return 0;
    return n+ f(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}