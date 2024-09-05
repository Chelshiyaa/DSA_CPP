#include<iostream>
using namespace std;
int fact(int n){ 
    if(n == 0){
        return 1;
    }
    return n * fact(n - 1);
}
int main(){ 
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Factorial of " << x << " is " << fact(x) << endl; 
    return 0;
}


