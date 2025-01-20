#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool match(char a,char b){
        return ((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']'));
    }
    bool isParenthesisBalanced(string& s) {
        stack<char>stk;
        for(char x:s){
            if(x=='('||x=='{'||x=='[') stk.push(x);
            else{
                if(stk.empty()) return false;
                if(!match(stk.top(),x)) return false;
                stk.pop();
            }
        }
        return stk.empty();
    }
};

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isParenthesisBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}