#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)
const int MOD = 1e9+7;

ll bcpow(ll a, ll b){ // bcpow(a,MOD-2) :: Modular Inverse of a
    ll r = 1;
    while(b) {
        if(b&1ll) r = r * a % MOD;
        a = a * a % MOD; b >>= 1ll;
    } return r;
}

void solve() {
    ll n, k; cin >> n >> k;
    ll ans = 0;
    ll bits = (int)log2(k)+1;
    rep(i,0,bits+1) {
        if(k & (1 << i)) {
            ans += bcpow(n,i);
            if(ans > MOD) ans %= MOD;
        }
    }
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