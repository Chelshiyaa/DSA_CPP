#include<iostream>
using namespace std;
int longest(string s){
    int l=0,r=0,maxlen=0;
    if(s.size()==0) return 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            l++;
        }
        else{
            r++;
        }
        if(l==r){
            maxlen=max(maxlen,r+l);
        }
        else if(r>l){
            r=0;
            l=0;
        }
    }
    l=r=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==')'){
            r++;
        }
        else{
            l++;
        }
        if(l==r){
            maxlen=max(maxlen,r+l);
        }
        else if(l>r){
            l=r=0;
        }
    }
    return maxlen;
}
int main(){
    string s;
    cin>>s;
    cout<<longest(s);
}