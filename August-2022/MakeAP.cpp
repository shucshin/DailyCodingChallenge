#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    
    ll aa = b - (c-b);
    if(aa >= a && aa%a == 0 && aa != 0) {
        cout << "YES\n";
        return;
    }

    ll bb = a + (c-a)/2;
    if(bb >= b && (c-a)%2 == 0 && bb%b == 0 && bb != 0) {
        cout << "YES\n";
        return;
    }

    ll cc = a + 2*(b-a);
    if(cc >= c && cc%c == 0 && cc != 0) {
        cout << "YES\n";
        return;
    }
    
    cout << "NO\n";
    return;
}

int main() {
    int t;
    cin >> t;
    while(t--) 
        solve();
}