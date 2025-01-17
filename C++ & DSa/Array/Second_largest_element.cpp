#include <iostream>
using namespace std;

// returns the index of second largest
// if second largest doesn't exist return -1
int secondLargest(int arr[], int n) {
    if (n < 2) return -1; 
	int first = 0, second = -1;
	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[first]) {
			second = first;
			first = i;
		}
		else if (arr[i] < arr[first]) {
			if (second == -1 || arr[second] < arr[i])
				second = i;
		}
	}
	return second;
}

int main() {
	int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    if (n < 1) {
        cout << "Array size should be at least 1.";
        return 0;
    }
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = secondLargest(arr, n); 
	if (index == -1)
		cout << "Second largest element doesn't exist.";
	else
		cout << "Second largest element: " << arr[index];
}
