#include<iostream>
using namespace std;
int maxCons(int arr[],int n){
    int res=0,current=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)current=0;
        else{
            current++;
            res=max(current,res);
        }
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
    int maxones = maxCons(arr, n);
    cout << "maximum onces are: " << maxones;
    return 0;
}