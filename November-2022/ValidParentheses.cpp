#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk, temp;
        for(int i = 0; i < s.length(); i++) {
            stk.push(s[i]);
        }
        bool ans = true;
        while(!stk.empty()) {
            char c = stk.top(); stk.pop();
            if(c == ')' || c == ']' || c == '}') temp.push(c);
            else {
                if(temp.empty()) {ans = false; break;}
                char tempElem = temp.top(); temp.pop();
                if((tempElem == ')' && c != '(') || (tempElem == ']' && c != '[') || (tempElem == '}' && c != '{')) {ans = false; break;}
            }
        }
        if(!temp.empty()) ans = false;
        return ans;
    }
};

int main() {
    string s1 = "()", s2 = "()[]{}", s3 = "(]";
    string s4 = "{([])}", s5 = "{[()]()}";
    Solution solution;
    cout << solution.isValid(s1) << endl;
    cout << solution.isValid(s2) << endl;
    cout << solution.isValid(s3) << endl;
    cout << solution.isValid(s4) << endl;
    cout << solution.isValid(s5) << endl;
    return 0;
}