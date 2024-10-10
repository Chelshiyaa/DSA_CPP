#include <iostream>
#include <string>
using namespace std;

void String1(string str) {
    for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i])) {
            int num = str[i] - '0'; 
            for (int j = 0; j < num; j++) {
                for (int k = 0; k < i; k++) {
                    cout << str[k];
                }
                cout << " ";
            }
        }
    }
}

int main() {
    string input = "ab2abc3";
    String1(input);
    return 0;
}
