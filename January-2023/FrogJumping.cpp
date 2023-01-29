#include <iostream>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    ll a, b, k; cin >> a >> b >> k;
    ll freqA = k/2, freqB = k/2;
    if(k%2 == 1) freqA++;
    ll ans = a*freqA - b*freqB;
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}