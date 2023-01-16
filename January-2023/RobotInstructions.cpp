#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n, a; cin >> n; cin.ignore();
    string s; vi v(n);
    rep(i,0,n) {
        cin >> s;
        if(s == "LEFT") v[i] = -1;
        else if(s == "RIGHT") v[i] = 1;
        else {
            cin >> s; cin >> a;
            v[i] = v[a-1];
        }
    }
    int ans = 0;
    rep(i,0,n) {
        ans += v[i];
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}