#include <iostream>
using namespace std;
void Bubble(int arr[], int n) {
    bool swapped;
    for(int i = 0; i < n; i++) {
        swapped=false;
        for(int j = 1; j < n - i; j++) {
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {3, 2, 5, 1, 7, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    Bubble(arr, n);
    printArray(arr, n);
    return 0;
}
