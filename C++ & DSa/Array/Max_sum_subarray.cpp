#include<iostream>
using namespace std;
int maxsum(int arr[], int n){
    int res=arr[0],maxEnd=arr[0];
    for(int i=1;i<n;i++){
        maxEnd=max(maxEnd+arr[i],arr[i]);
        res=max(maxEnd,res);
    }
    return res;
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxones = maxsum(arr, n);
    cout << "maximum onces are: " << maxones;
    return 0;
}