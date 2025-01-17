#include <iostream>
using namespace std;
void PrintFreq(int arr[], int n, int key) {
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            if (first == -1){ 
                first = i;
            }
            last = i;
        }
    }
    if (first != -1 && last != -1) {
        cout << "First = " << first ;
        cout << "Last = " << last ;
    } else {
        cout << "no";
    }
}
int FreqofKey(int arr[],int n,int key){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            c++;
        }
    }
    return c;
}
// void OccOfEvery(int arr[],int n){

// }
int main() {
    int n, key;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key: ";
    cin >> key;
    PrintFreq(arr, n, key);
    int m=FreqofKey(arr,n,key);
    cout<<"Frequency of key is : "<<m<<endl;
    return 0;
}
