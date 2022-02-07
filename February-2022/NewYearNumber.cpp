#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    if(n < 2020) {
        cout << "NO\n";
        return;
    }
    bool a = true;
    ll r = n%2020;
    n -= 2021*r;
    if(n < 0)
        a = false;
    if(n%2020 == 0 && n > 0)
        a = true;
    if(a)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}