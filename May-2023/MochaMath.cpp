#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n, a, ans; cin >> n; bool o = 1;
    rep(i,0,n) {
        cin >> a; 
        if(o) {o = 0; ans = a; continue;} 
        ans = (ans&a);
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}