#include<iostream>
using namespace std;

int rmvdpt(int arr[], int n) {
    if (n == 0) return 0;  // Edge case: empty array

    int res = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[res - 1]) {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;  // Return the new length of the array
}

int main() { 
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int new_length = rmvdpt(arr, n);  // Get the new length after removing duplicates
    
    cout << "New array: ";
    for (int i = 0; i < new_length; i++) {  // Print only up to the new length
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
