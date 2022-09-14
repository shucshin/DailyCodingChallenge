#include <iostream>
#include <string>
#include <stack>
using namespace std;

void solve() {
    string s;
    cin >> s;
    stack<char> stk;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '<')
            stk.push(s[i]);
        if(s[i] == '>')
            stk.push(s[i]);
    }
    int ans = 0, right = 0;
    while(!stk.empty()) {
        if(stk.top() == '>')
            right++;
        if(stk.top() == '<' && right > 0) {
            ans++;
            right--;
        }
        stk.pop();
    }
    cout << ans << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
    return 0;
}