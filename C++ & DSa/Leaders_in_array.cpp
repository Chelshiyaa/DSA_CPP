#include <iostream>
using namespace std;

void leader(int arr[], int n) {
    int leaders[n]; 
    int index = 0; 

    int curr_leader = arr[n - 1];
    leaders[index++] = curr_leader;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > curr_leader) {
            curr_leader = arr[i];
            leaders[index++] = curr_leader;
        }
    }
    for (int i = index - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    leader(arr, n);
    return 0;
}
