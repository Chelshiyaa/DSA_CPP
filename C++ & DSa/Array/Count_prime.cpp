#include <iostream>
using namespace std;
bool prime(int n) {
    if (n <= 1) {
        return false; 
    }
    if (n == 2 || n == 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
    
}

int main() {
    int count = 0;
    int a;
    cin>>a;
    cout<<"prime numbers are: "<<endl;
    for (int i = 2; i < a; i++) {
        if (prime(i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << "Total prime numbers are: " << count << endl;
    return 0;
}
