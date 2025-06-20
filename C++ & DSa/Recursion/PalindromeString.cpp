#include<iostream>
using namespace std;
// bool fun(int l,int r,string s){
//     if(l>=r) return true;
//     if(s[l]!=s[r]) return false;
//     return fun(l+1,r-1,s);
// }
bool fun(int i,string s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return fun(i+1,s);
}
int main(){
    string a;
    cin>>a;
    int len=a.length();
    cout<<fun(0,a);
}