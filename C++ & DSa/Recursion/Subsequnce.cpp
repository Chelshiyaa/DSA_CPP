#include <iostream>
#include <string> 
using namespace std;
void subseq(string process, string unpro) {
    if (unpro.empty()) {
        cout << process << endl; 
        return;
    }
    char c = unpro[0];
    subseq(process + c, unpro.substr(1)); 
    subseq(process, unpro.substr(1));      
}
int main() {
    string input = "abc";  
    subseq("", input);     
    return 0;
}
