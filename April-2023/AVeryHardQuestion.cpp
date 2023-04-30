#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    ll x, y; cin >> y >> x;
    y *= 100;
    cout << y/(100+x) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}