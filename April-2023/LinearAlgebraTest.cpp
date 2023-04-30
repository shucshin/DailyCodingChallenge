#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
using vi = vector<int>;
using pi = pair<int,int>;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n, b; cin >> n;
    map<int,ll> snd;
    vi v(n);
    rep(i,0,n) {
        cin >> v[i] >> b;
        snd[b]++;
    }

    ll ans = 0;
    rep(i,0,n) {
        if(snd.count(v[i])) ans += snd[v[i]];
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}