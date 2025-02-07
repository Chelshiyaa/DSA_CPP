#include <iostream>
using namespace std;
bool sorted(int arr[], int size, int i) {
    if (i == size - 1) return true; 
    return arr[i] < arr[i + 1] && sorted(arr, size, i + 1);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << boolalpha << sorted(arr, size, 0); 
    return 0;
}
