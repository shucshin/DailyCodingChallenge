#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n, z, a; cin >> n >> z;
    int ans = 0;
    rep(i,0,n) {
        cin >> a;
        ans = max(ans, a | z);
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}