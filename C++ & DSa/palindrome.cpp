#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int rev=0;
    int temp=a;
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp/=10;
    }
    if(a==rev){
        cout<<"is palindrome";
    }
    else{
        cout<<"is not palindrome";
    }
}