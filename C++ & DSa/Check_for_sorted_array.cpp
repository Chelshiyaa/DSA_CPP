#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"The array is sorted? "<<isSorted(arr,n);
}