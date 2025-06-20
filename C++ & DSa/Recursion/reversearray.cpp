#include<iostream>
#include<algorithm>
using namespace std;
void fun(int l,int r,int arr[]){
    if(l>=r)return;
    swap(arr[l],arr[r]);
    fun(l+1,r-1,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    fun(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// void fun(int n,int arr[]){
//     if(n<0) return;
//     cout<<arr[n]<<" ";
//     fun(n-1,arr);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     fun(n-1,arr);
// }
