#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
string tobinary(ll n) {string s = ""; for(int i = (int)log2(n); i >= 0; i--) {(1&(n>>i)) ? s+="1" : s+="0";} return s;}

void solve() {
    int n, k; cin >> n >> k;
    vi bits(31,0);
    vector<ll> v(n); 
    rep(i,0,n) {
        cin >> v[i];
        for(int j = (int)log2(v[i]); j >= 0; j--) {
            if(v[i] & (1 << j)) bits[j]++;
        } 
    }
    
    int bit = 30;
    while(k > 0) {
        while(bits[bit] == n || n-bits[bit] > k) bit--;
        if(bit < 0) break;
        // if(k < (n-bits[bit])) continue;
        rep(i,0,n) {
            v[i] |= (1 << bit);
            k -= (n-bits[bit]);
            bits[bit] = n;
        }
    }
    ll ans = pow(2,31)-1;
    rep(i,0,n) ans &= v[i];
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}