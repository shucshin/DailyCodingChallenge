#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    for(ll p = 2; p < 30; ++p) {
        // v and v2 are the same.
        ll v = (1 << p) - 1;
        ll v2 = 1 * pow(2,p) - 1;
        if(n%v2 == 0) {
            //cout << n/v << endl;
            cout << n/v2 << endl;
            break;
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}