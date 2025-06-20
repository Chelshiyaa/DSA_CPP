#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,0,2,1};
    int n = 4;
    int i = 0;
    while(i<n){
        int ind = arr[i];
        if(arr[i]!=i){
            swap(arr[i],arr[ind]);
        }
        else{
            i++;
        }
    }
    for(int k: arr){
        cout<<k<<" ";
    }
}