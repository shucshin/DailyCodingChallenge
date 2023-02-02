#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()

int main() {
    int n, s; cin >> n >> s;
    vll v(n);
    rep(i,0,n) cin >> v[i];
    sort(all(v));
    // if s is bigger than medium value, go right
    // else go left
    if(s > v[n/2]) {
        ll ans = 0;
        rep(i,n/2,n) {
            if(s <= v[i]) break;
            ans += (s-v[i]);
        }
        cout << ans << endl;
    }
    else if(s < v[n/2]) {
        ll ans = 0;
        for(int i = n/2; i >= 0; i--) {
            if(s >= v[i]) break;
            ans += (v[i]-s);
        }
        cout << ans << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}