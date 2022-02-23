#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll n, ans, a, b, c;
    while(true) {
        cin >> n;
        if(n == -1)
            break;
        ans = 0, c = 0;
        for(ll i = 0; i < n; i++) {
            cin >> a >> b;
            ans += a*(b-c);
            c = b;
        }
        cout << ans << " miles\n";
    }
    return 0;
}