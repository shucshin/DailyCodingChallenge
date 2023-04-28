#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)


void solve() {
    int n; cin >> n;
    vi a(n), b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    bool can = 1;
    rep(i,0,n-1) {
        if(a[i] > b[i]) {can = 0; break;}
        if(a[i] < b[i] && b[i] > b[i+1]+1) {can = 0; break;}
    }
    if(a[n-1] > b[n-1]) can = 0;
    if(a[n-1] < b[n-1] && b[n-1] > b[0]+1) can = 0;
    can ? printf("YES\n") : printf("NO\n");
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}