#include<iostream>
#include<vector>
using namespace std;
int Brute(vector<int>arr,int k){
    int n=arr.size();
    int maxLen=0;
    for(int i=0;i<n-1;i++){
        int sum=0;
        for(int j=i;j<n-1;j++){
            sum+=arr[j];
            if(sum<=k){
                maxLen=max(maxLen,j-i+1);
            }
            else if(sum>k){
                break;
            }
        }
    }
    return maxLen;
}
int optimal(vector<int> arr, int k) {
    int n = arr.size();
    int l = 0, r = 0, maxLen = 0, sum = 0;
    while (r < n) {
        sum += arr[r];  // Expand window by adding rightmost element
        if (sum > k) {  // Shrink window from the left
            sum -= arr[l];
            l++;
        }
        maxLen = max(maxLen, r - l + 1);  // Update max length
        r++;  // Move right pointer
    } 
    return maxLen;
}

int main(){
    vector<int>arr={2,5,1,7,10};
    int k =14;
    int maxi=optimal(arr,k);
    cout<<maxi;

}