// https://codeforces.com/problemset/problem/813/B
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define rep(i,a,b) for(ll i = a; i < b; i++)
const ll INF = 1e18;

ll longestGoldenAge(vll v) {
    ll diff = 0;
    rep(i,0,v.size()-1) {
        diff = max(diff, v[i]-v[i+1]-1);
    }
    return diff;
}


int main() {
    ll x, y, l, r; cin >> x >> y >> l >> r;
    ll numX = 1;
    vll v; v.pb(l-1), v.pb(r+1);
    while(numX <= r) {
        ll numY = 1;
        while(numY <= r) {
            ll unlucky = numX + numY;
            if(unlucky >= l && unlucky <= r) v.pb(unlucky); 
            if(numY > INF/y) break; // needs to check just before changing numY
            numY *= y;
        }
        if(numX > INF/x) break;
        numX *= x;
    }
    sort(all(v), greater<ll>());
    cout << longestGoldenAge(v) << endl;
    return 0;
}