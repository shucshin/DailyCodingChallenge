#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n; cin >> n;
    int ans;
    rep(i,0,n) {
        cin >> ans;
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}