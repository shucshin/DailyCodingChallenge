#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int a, b, ans = 0; cin >> a;
    rep(i,0,3) {
        cin >> b;
        if(b > a) ans++;
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}