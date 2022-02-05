#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

void solve(ll n, ll m) {
    ll ans = n + n/(m-1);
    if(n%(m-1) == 0)
        ans--;
    cout << ans << endl;
}

int main()
{
    ll n, m;
    cin >> n >> m;
    solve(n,m);
    return 0;
}