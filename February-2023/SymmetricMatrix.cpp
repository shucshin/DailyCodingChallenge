#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n, m; cin >> n >> m;
    bool can = false;
    rep(i,0,n) {
        int i1, j1, i2, j2; cin >> i1 >> j1 >> i2 >> j2;
        if(j1 == i2) can = true;
    }
    (can && m%2 == 0) ? printf("YES\n") : printf("NO\n");
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}