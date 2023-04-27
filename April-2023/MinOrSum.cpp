#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n; cin >> n;
    int ans, a; cin >> ans;
    rep(i,1,n) {cin >> a; ans |= a;}
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}