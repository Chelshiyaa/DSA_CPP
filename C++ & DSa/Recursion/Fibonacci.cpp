#include<iostream>
using namespace std;
int fib(int N) {
    if (N == 0) return 0;
    if (N == 1) return 1;
    return fib(N - 2) + fib(N - 1);
}
void printFibonacci(int n, int current = 0) {
    if (current >= n) return; 
    cout << fib(current) << " "; 
    printFibonacci(n, current + 1); 
}
int main() {
    int n;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> n;
    cout << "Fibonacci series: ";
    printFibonacci(n); // Call the recursive function to print the series
    cout << endl;
    return 0;
}