#include <iostream>
#include <algorithm> 
using namespace std;
// Function to solve the knapsack problem recursively
int knapsack(int n, int values[], int weight[], int W) {
    // Base case: no items left or capacity is zero
    if (n == 0 || W == 0) return 0;
    // If the weight of the nth item exceeds the capacity, skip it
    if (weight[n - 1] > W)
        return knapsack(n - 1, values, weight, W);
    // Return the maximum of two cases:
    // 1. Excluding the nth item
    // 2. Including the nth item
    return max(knapsack(n - 1, values, weight, W),
               values[n - 1] + knapsack(n - 1, values, weight, W - weight[n - 1]));
}

int main() {
    int n; // Number of items
    int W; // Maximum capacity of the knapsack

    cout << "Enter the number of items: ";
    cin >> n;

    int values[n], weight[n];

    cout << "Enter the values of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    cout << "Enter the weights of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    cout << "Enter the maximum capacity of the knapsack: ";
    cin >> W;

    int max_value = knapsack(n, values, weight, W);
    cout << "The maximum value that can be obtained is: " << max_value << endl;

    return 0;
}