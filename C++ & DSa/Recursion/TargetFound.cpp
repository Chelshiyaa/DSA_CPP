#include<iostream>
using namespace std;

bool found(int arr[], int i, int target, int size) {
    if (i == size) return false;
    return arr[i] == target || found(arr, i + 1, target, size);
}

int main() {
    int arr[] = {2, 3, 12, 22, 34, 44, 56, 674, 4, 335};
    int tar = 335;
    int s = 10;
    cout << (found(arr, 0, tar, s) ? "Found" : "Not Found");
}
