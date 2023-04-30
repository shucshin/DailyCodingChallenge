#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    (b*log(a) <= d*log(c)) ? printf("<\n") : printf(">\n");
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}