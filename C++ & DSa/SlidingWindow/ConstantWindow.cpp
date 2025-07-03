#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>arr,int k){
    int sum=0,l=0,r=0,maxsum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int n=arr.size();
    while(r<n-1){
        sum-=arr[l];
        l++;
        r++;
        sum+=arr[r];
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}
int main(){
    vector<int>arr={2,5,1,7,10};
    int k=4;
    int maxi=fun(arr,k);
    cout<<maxi;

}