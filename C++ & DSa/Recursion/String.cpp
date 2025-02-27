#include <iostream>
using namespace std;

string removes(string s, int i, string answer) {
    if (i >= s.size()) return answer; // Base case: return the accumulated answer

    if (s[i] != 'a') {
        answer+= s[i]; // Append non-'a' characters
    }
    
    return removes(s, i + 1, answer); // Recursive call with updated answer
}
string removes2(string s,int i){
    if(i>=s.size()) return "";
    if(s[i]!='a'){
        return s[i]+removes2(s,i+1);
    }
    return removes2(s,i+1);
}
string removechar(string s) {
    // return removes(s, 0, ""); // Call helper function with an empty answer string
    return removes2(s, 0);
}

int main() {
    string input = "banana"; // Example input
    cout << removechar(input) << endl; // Expected output: "bnn"
    return 0;
}
