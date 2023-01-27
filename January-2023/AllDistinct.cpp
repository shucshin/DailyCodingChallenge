#include <iostream>
#include <vector>
#include <map>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n, a; cin >> n;
    map<int,int> m;
    rep(i,0,n) {
        cin >> a;
        m[a]++;
    }
    int even=0, ans=0;
    for(auto a : m) {
        (a.second%2 == 0) ? even++ : ans++;
    }
    ans += even;
    if(even%2 == 1) ans--;
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}