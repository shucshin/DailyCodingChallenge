#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define pb(a) push_back(a)
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n, a; cin >> n;
    vi v1, v2;
    rep(i,0,n) {
        cin >> a;
        (i%2==0) ? v1.pb(a) : v2.pb(a);
    }
    bool o1=0, e1=0, o2=0, e2=0;
    rep(i,0,v1.size()) {
        v1[i]%2 == 0 ? e1=1 : o1=1;
    }
    rep(i,0,v2.size()) {
        v2[i]%2 == 0 ? e2=1 : o2=1;
    }
    (e1&&o1 || e2&&o2) ? printf("NO\n") : printf("YES\n");
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}