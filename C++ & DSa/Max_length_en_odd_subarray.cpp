#include<iostream>
using namespace std;
bool isEven(int num) {
    return num % 2 == 0;
}
int maxLength(int arr[], int n) {
    int res = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && isEven(arr[i]) != isEven(arr[i + 1])) {
            current++;
            res = max(res, current);
        } else {
            current = 1;
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxLengthSubarray = maxLength(arr, n);
    cout << "Maximum length of subarray with alternating even and odd numbers is: " << maxLengthSubarray;
    return 0;
}
