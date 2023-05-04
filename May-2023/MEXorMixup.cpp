#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

const int MAXN = 3e5+1;
vi xorPref(MAXN,0);

void solve() {
    int a, b; cin >> a >> b;
    int ans = a;
    if((xorPref[a-1]^b) == a) ans++;
    (xorPref[a-1] != b) ? ans++ : ans = a;
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    rep(i,1,MAXN) xorPref[i] = (xorPref[i-1]^i);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}