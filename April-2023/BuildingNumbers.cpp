#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)

ll ops(ll n) {
    if(n == 1) return 0;
    if(n%2==0) return 1 + ops(n/2);
    return 1+ops(n-1);
}

void solve() {
    int n, q, a, l, r; cin >> n >> q;
    vll v(n); rep(i,0,n) {cin >> v[i]; v[i] = ops(v[i]);}
    vll p(n); p[0] = v[0];
    rep(i,1,n) {
        p[i] = p[i-1]+v[i];
    }
    rep(i,0,q) {
        cin >> l >> r; l-=2; r--;
        if(l < 0) {cout << p[r] << endl; continue;}
        cout << p[r]-p[l] << endl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}