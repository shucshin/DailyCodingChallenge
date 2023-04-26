#include <iostream>
#include <cmath>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    string s; cin >> s;
    int n = s.length();
    bool first = s[0] == '?';
    int marks = 0;
    rep(i,0,n) {
        if(s[i] == '?') marks++;
    }
    int ans = pow(10,marks);
    if(first) ans -= pow(10,marks-1);
    if(s[0] == '0') ans = 0;
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}