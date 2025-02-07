#include<iostream>
using namespace std;
// brute force
/*int Freq(int arr[],int key,int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key) c++;
    }
    return c;
}*/
int Hashing(int arr[],int key,int n){
    int hash[n]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    return hash[key];
}
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>key;
    // int fr=Freq(arr,key,n);
    int fr=Hashing(arr,key,n);
    cout<<fr;
}