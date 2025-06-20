#include<iostream>
using namespace std;
int c=0;
void f(){
    if(c==5)return;
    cout<<"chelshiya"<<endl;
    c++;
    f();
}
int main(){
    f();
}