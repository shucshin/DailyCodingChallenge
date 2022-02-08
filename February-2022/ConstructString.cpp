#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++) {
        cout << char('a' + i%b);
    }
    cout << endl;
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
