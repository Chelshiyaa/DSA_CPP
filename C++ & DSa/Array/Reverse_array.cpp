#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int low=0; int high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
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
    reverse(arr,n);
    cout<<"reversed array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}