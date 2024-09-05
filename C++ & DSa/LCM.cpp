#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
int lcm(int a,int b){
    return(a*b)/gcd(a,b);
}
int main(){
    int x,y;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    cout<<"Lcm of x and y: "<<lcm(x,y);
}