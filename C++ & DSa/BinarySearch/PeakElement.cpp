#include<iostream>
#include<vector>
using namespace std;

int peakEle(vector<int>& arr) {
    int s=0;
    int e=arr.size()-1;
    while(s<e) {
        int m =s+(e-s)/2;
        if(arr[m]<arr[m + 1]) {
            s = m + 1;
        } else {
            e = m;
        }
    }
    return s;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 8, 9, 6, 4, 2};
    int ans = peakEle(arr);
    cout << "Peak element index: " << ans << endl;
    return 0;
}
