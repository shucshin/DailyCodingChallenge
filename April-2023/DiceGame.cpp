#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n; cin >> n;
    if(n == 1) {cout << -1 << endl; return;}
    int ans = (n/11)*2;
    ans += ((n%11)/5);
    if(((n%11)%5) != 0) ans++;
    if(n == 7) ans++;
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}