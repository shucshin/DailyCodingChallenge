#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
const int INF = 1e9;

void solve() {
    int n, m, k; cin >> n >> m;
    vi prizes[n];
    map<int, int> stickers;
    rep(i,0,n) {
        cin >> k;
        vi v(k+1);
        rep(j,0,k+1) cin >> v[j];
        prizes[i] = v;
    }
    rep(i,1,m+1) cin >> stickers[i];
    ll cash = 0;
    for(auto z : prizes) {
        int min = INF;
        rep(i,0,z.size()-1) {
            if(stickers[z[i]] < min) min = stickers[z[i]];
        }
        cash += min*z[z.size()-1];
    }
    cout << cash << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}