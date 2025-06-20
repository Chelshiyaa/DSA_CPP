#include<iostream>
using namespace std;
void f(int n){
    if(1>n)return;
    cout<<n<<endl;
    f(n-1);
}
int main(){
    int n;
    cin>>n;
    f(n);
}