#include <iostream>

using namespace std;
using ll = long long;

void solve(ll c) {
    ll n, m, t, total = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> t;
        total += t;
    }
    printf("Case #%lld: %lld\n", c, total%m);
}

int main()
{
    ll t;
    cin >> t;
    ll c = 1;
    while(t--) {
        solve(c);
        c++;
    }
    return 0;
}