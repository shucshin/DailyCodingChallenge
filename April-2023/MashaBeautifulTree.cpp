#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define all(a) (a).begin(), (a).end()
#define rep(i,a,b) for(int i = a; i < b; i++)

bool merge(vi &v, int l, int m, int r) {
    if(v[m] < v[m+1]) return 0;
    rep(i,l,m+1) swap(v[i],v[i+(r-l+1)/2]); 
    return 1;
}

void reqSwaps(vi &v, int l, int r, int &ans) {
    if(l < r) {
        int m = l+(r-l)/2;
        reqSwaps(v,l,m, ans);
        reqSwaps(v,m+1,r, ans);
        if(merge(v,l,m,r)) ans++;
    }
}

void solve() {
    int m; cin >> m;
    vi v(m); rep(i,0,m) cin >> v[i];
    int ans = 0;
    reqSwaps(v,0,m-1,ans);
    is_sorted(all(v)) ? printf("%d\n",ans) : printf("-1\n");
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}