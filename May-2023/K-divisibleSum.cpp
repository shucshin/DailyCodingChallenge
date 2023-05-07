#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    ll n, k; cin >> n >> k;
    cout << (n+(k*((n+k-1)/k))-1)/n << endl;
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