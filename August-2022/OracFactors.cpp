#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    if(n%2 == 0) 
        n += 2*k;
    else {
        ll p = 0;
        for(ll i = n; i >= 2; i--) {
            if(n%i == 0) {
                p = i;
            }
        }
        n += p;
        n += 2*(k-1);
    }
    cout << n << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--)
        solve();
}