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

    int l = 0, r = 0; bool first = 1;
    rep(i,0,n) {
        if(first && a[i] != b[i]) {l = i; first = 0;}
        if(a[i] != b[i]) r = i;
    }

    while(b[l-1] <= b[l]) l--;
    if(l == -1) l = 0;

    while(b[r] <= b[r+1]) r++;
    if(r == n) r = n-1;

    cout << l+1 << " " << r+1 << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}