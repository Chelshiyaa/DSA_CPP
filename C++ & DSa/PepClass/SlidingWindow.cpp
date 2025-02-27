#include<iostream>
using namespace std;
void sliding(int arr[], int n, int key) {
    int sum = 0;
    for (int i = 0; i < key; i++) {
        sum += arr[i];
    }
    int temp = sum;
    for (int i = 1; i <= n - key; i++) {
        sum = sum - arr[i - 1] + arr[i + key - 1];
        if (sum > temp) {
            temp = sum;
        }
    }
    cout << "Maximum sum of a subarray of size " << key << " is: " << temp << endl;
}
int main() {
    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    cout << "Enter the key: ";
    int k;
    cin >> k;

    if (k > n || k <= 0) {
        cout << "Invalid key value! It must be between 1 and " << n << "." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sliding(arr, n, k);
    return 0;
}
