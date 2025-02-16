#include <iostream>
using namespace std;

int MaxrowSum(int arr[][100], int n, int m) { // Assuming max columns as 100
    int maxSum = 0; // Store the maximum row sum

    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) { // Use j instead of i in the inner loop
            rowSum += arr[i][j]; // Sum the row elements
        }
        maxSum = max(maxSum, rowSum); // Update the maximum sum
    }

    return maxSum; // Return the maximum row sum
}

int main() {
    int n = 3, m = 3;
    int arr[3][100] = { // Assume a max column size of 100
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Maximum row sum: " << MaxrowSum(arr, n, m) << endl;

    return 0;
}
