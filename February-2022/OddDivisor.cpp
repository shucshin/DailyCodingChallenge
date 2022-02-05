#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    while(n%2==0)
        n /= 2;
    if(n != 1)
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