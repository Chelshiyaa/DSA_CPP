#include<iostream>
using namespace std;
// recursive code 
// int knapsack(int wt[], int val[], int W, int n) {
//     if (n == 0 || W == 0) return 0;
//     if (wt[n - 1] <= W) {
//         return max(
//             val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1),
//             knapsack(wt, val, W, n - 1)
//         );
//     } else {
//         return knapsack(wt, val, W, n - 1);
//     }
// }


// memo code 
#include <iostream>
#include <cstring> // for memset
using namespace std;

const int MAXN = 1001; // Max number of items
const int MAXW = 1001; // Max capacity of knapsack

int dp[MAXN][MAXW]; // DP table

// Recursive function with memoization
int knapsack(int wt[], int val[], int W, int n) {
    // Base condition
    if (n == 0 || W == 0)
        return 0;

    // Return already computed subproblem
    if (dp[n][W] != -1)
        return dp[n][W];

    // If current item can be included
    if (wt[n - 1] <= W) {
        dp[n][W] = max(
            val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1),
            knapsack(wt, val, W, n - 1)
        );
    } else {
        // If current item cannot be included
        dp[n][W] = knapsack(wt, val, W, n - 1);
    }

    return dp[n][W];
}

int main() {
    int wt[] = {1, 3, 4, 5}; // Weights of items
    int val[] = {1, 4, 5, 7}; // Values of items
    int W = 7; // Knapsack capacity
    int n = sizeof(wt) / sizeof(wt[0]); // Number of items

    // Initialize dp array with -1
    memset(dp, -1, sizeof(dp));

    int maxValue = knapsack(wt, val, W, n);
    cout << "Maximum value that can be obtained: " << maxValue << endl;

    return 0;
}
