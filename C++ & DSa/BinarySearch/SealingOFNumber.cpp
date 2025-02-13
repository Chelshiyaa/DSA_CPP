#include<iostream>
#include<vector>
using namespace std;

int Sealing(vector<int> arr, int target) {
    int n = arr.size();
    if (n == 0) return -1; 
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int m = s + (e - s) / 2;
        if (target < arr[m]) {
            e = m - 1;
        } else if (targ et > arr[m]) {
            s = m + 1;
        } else {
            return m;
        }
    }
    return s;
}

int main() {
    vector<int> arr = {2, 3, 5, 9, 12, 17, 19};
    int t = 15;
    int ans = Sealing(arr, t);
    if (ans != -1) {
        cout << "Ceiling of " << t << " is " << arr[ans] << endl;
    } else {
        cout << "No element is greater or equal to " << t << endl;
    }
    return 0;
}
