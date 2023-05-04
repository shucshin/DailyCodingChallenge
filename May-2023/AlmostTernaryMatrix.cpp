#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n, m; cin >> n >> m;
    int io = 0;
    rep(i,0,n) {
        if(i%2) io ^= 1;
        int oi = io;
        rep(j,0,m) {
            if(j%2) oi ^= 1;
            cout << oi << " ";
        } cout << endl;   
    }
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