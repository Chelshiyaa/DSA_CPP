#include <iostream>
using namespace std;

int deletion(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            break;
        }
    }
    if (i == n) {
        // Element not found
        return n;
    }

    // Shift elements to the left
    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }

    // Return the new size of the array
    return n - 1;
}

int main() {
    int n, x;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to delete: ";
    cin >> x;

    // Call the deletion function and update the size
    n=deletion(arr, n, x);

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
