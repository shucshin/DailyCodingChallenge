#include <iostream>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;
    ll ans = 0;
    while(n != 1) {
        if(n%6 == 0) {
            n /= 6;
            ans++;
        }
        else {
            ll a = n;
            while(n%6 != 0) {
                if(n > a*6) {
                    cout << -1 << endl;
                    return;
                }
                n *= 2;
                ans++;
            }
        }
    }
    cout << ans << endl;
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