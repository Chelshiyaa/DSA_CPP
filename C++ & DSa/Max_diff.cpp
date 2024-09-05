#include<iostream>
using namespace std;
int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0],minval=arr[0];
    for(int j=1;j<n;j++){
        res=max(res,arr[j]-minval);
        minval=min(minval,arr[j]);
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=maxDiff(arr,n);
    cout<<"Maximum difference is: "<<maxi;
    return 0;
}