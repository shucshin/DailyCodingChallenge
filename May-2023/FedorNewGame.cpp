#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int n, m, k; cin >> n >> m >> k;
    // n :: num of bits we're gonna compare, 0 ~ n-1
    // m num of players, i'm player m+1
    vi v(m); rep(i,0,m) cin >> v[i];
    int me, ans = 0; cin >> me;
    rep(i,0,m) {
        int d = 0;
        rep(j,0,n) {
            if((me & (1 << j)) != (v[i] & (1 << j))) d++;
        }
        if(d <= k) ans++;
    }
    cout << ans << endl;
    return 0;
}