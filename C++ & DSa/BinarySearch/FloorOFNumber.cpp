#include<iostream>
#include<vector>
using namespace std;

int Floor(vector<int> arr, int target) {
    int n = arr.size();
    if (n == 0) return -1; 
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int m = s + (e - s) / 2;
        if (target < arr[m]) {
            e = m - 1;
        } else if (target > arr[m]) {
            s = m + 1;
        } else {
            return m;
        }
    }
    return e;
}

int main() {
    vector<int> arr = {2, 3, 5, 9, 12, 17, 19};
    int t = 15;
    int ans = Floor(arr, t);
    if (ans != -1) {
        cout << "Floor of " << t << " is " << arr[ans] << endl;
    } else {
        cout << "No element is smaller or equal to " << t << endl;
    }
    return 0;
}
