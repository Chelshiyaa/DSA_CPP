#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int temp = a;
    int digit = 0;
    while (temp != 0) {
        digit++;
        temp /= 10;  
    }
    cout<<digit;
    return 0;
}