#include<iostream>
using namespace std;
int mvzero(int arr[],int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=0){
           swap(arr[i],arr[count]);
           count++;
        }
    }

}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mvzero(arr, n);  
    cout << "New array: ";
    for (int i = 0; i <n; i++) {  
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}