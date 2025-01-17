#include <iostream>
#include <cmath>
using namespace std;
void reverse(int arr[], int low, int high)
{
	while(low < high)
	{
		swap(arr[high], arr[low]);
		low++;
		high--;
	}
}   

void leftRotate(int arr[], int d, int n)
{
	reverse(arr, 0, d - 1);

	reverse(arr, d, n - 1);

	reverse(arr, 0, n - 1);
}
int main() {
	
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int d;
    cin>>d;
    leftRotate(arr, d,n);  
    cout << "New array: ";
    for (int i = 0; i <n; i++) {  
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
    
}
