#include <iostream>
using namespace std;
using ll = long long;

ll solve(ll n, ll m, ll x) {
    x--;
    ll c = x/n;
    ll r = x%n;
    ll ans = r*m + c + 1;
    return ans;
}

int main()
{
    ll t, n, m, x;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        cin >> n >> m >> x;
        cout << solve(n, m, x) << endl;
    }
    return 0;
}