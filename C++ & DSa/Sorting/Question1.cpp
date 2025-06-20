#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={0, 1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    while (i < n) {
        if (arr[i] != i && arr[i] < n) {
            swap(arr[i], arr[arr[i]]);
        } else {
            i++;
        }
    }
    for (int k : arr) {
        cout << k << " ";
    }
    return 0;
}
