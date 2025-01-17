#include<iostream>
using namespace std;

int insert(int arr[], int n, int pos, int x, int cap) {
    if(n == cap) {
        return n;  
    }
    
    int indx = pos - 1;  
    for(int i = n - 1; i >= indx; i--) {
        arr[i + 1] = arr[i];
    }
    arr[indx] = x;  // Insert the element at the position
    return n + 1;   // Return new size of the array
}

int main() {
    int pos, x, cap;
    
    cout << "Enter the capacity: ";
    cin >> cap;
    
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[cap];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the position to insert: ";
    cin >> pos;
    
    cout << "Enter the element to insert: ";
    cin >> x;
    
    n = insert(arr, n, pos, x, cap);  // Pass the array without brackets
    
    cout << "New array: ";
    for(int i = 0; i < n; i++) {  // Loop up to the new size
        cout << arr[i] << " ";
    }
    
    return 0;
}
