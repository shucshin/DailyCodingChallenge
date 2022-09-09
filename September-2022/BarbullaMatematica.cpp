#include <iostream>
using namespace std;
typedef long long ll;

ll gauss(ll n) {
    ll ans = 0;
    for(int i = 1; i <= n; i++)
        ans += i;
    return ans;
}

int main() {
    ll n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        ans += gauss(i);
    }
    cout << ans << endl;
    return 0;
}