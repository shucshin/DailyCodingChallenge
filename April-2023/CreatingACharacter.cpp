#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    ll s, i, e; cin >> s >> i >> e;
    if(s > i+e) {cout << e+1 << endl; return;}
    if(s+e <= i) {cout << 0 << endl; return;}
    ll l = 0, r = e, ans; bool found = 0;
    while(l+1 < r) {
        ll m = (l+r)/2;
        int a = m, b = e-m;
        if(s+a < i+b) l = m;
        if(s+a > i+b) r = m;
        if(s+a == i+b) {ans = b; found = 1; break;}
    }
    if(!found) ans = e-l;
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}