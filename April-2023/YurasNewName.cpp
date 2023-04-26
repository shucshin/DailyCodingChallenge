#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    string s; cin >> s;
    int ans = 0, c = 0;
    if(s[0] == '_') ans++;
    if(s[s.length()-1] == '_') ans++;
    rep(i,0,s.length()) {
        if(s[i] == '_') c++;
        else {
            if(c > 1) {
                ans += (c-1);
            }
            c = 0;
        }
    }
    if(c > 1) ans += (c-1);
    if(s[0] == '^' && s.length() == 1) ans = 1;
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}