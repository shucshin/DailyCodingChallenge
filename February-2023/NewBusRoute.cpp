#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
const ll INF = 1e10;

int main() {
    int n; cin >> n;
    vll v(n);
    rep(i,0,n) cin >> v[i];
    sort(all(v));
    ll min = INF;
    vll diffs(n-1);
    rep(i,0,n-1) {
        ll diff = abs(v[i]-v[i+1]);
        if(diff < min) {
            min = diff;
        }
        diffs[i] = diff;
    }
    ll ans = 0;
    rep(i,0,n-1) {
        if(diffs[i] == min) ans++;
    }
    cout << min << " " << ans << endl;
    return 0;
}