#include<iostream>
using namespace std;
void printfreq(int arr[],int n){
    int freq=1,i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1||arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<" "<<1<<endl;
    }
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printfreq(arr, n);
    return 0;
}
