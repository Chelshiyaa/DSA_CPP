#include <iostream>
#include <vector>
using namespace std;
int orderAgnosticBS(vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    bool isAsc = arr[start] < arr[end];

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (isAsc) {
            if (target < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else {
            if (target > arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {99, 80, 75, 22, 11, 10, 5, 2, -3};
    int target = 22;
    int ans = orderAgnosticBS(arr, target);
    cout << ans << endl;
    return 0;
}
