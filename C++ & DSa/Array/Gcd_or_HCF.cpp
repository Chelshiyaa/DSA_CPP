#include<iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
    int temp=b;
    b = a % b;
    a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    int temp = a;
    while (true) {
    if (temp % a == 0 && temp % b == 0) {
    return temp;
    }
    temp++;
    }
}  
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"HCF of "<<x<<" and "<<y<<" is "<<gcd(x,y)<<endl;
    cout<<"LCM of "<<x<<" and "<<y<<" is "<<lcm(x,y);

}