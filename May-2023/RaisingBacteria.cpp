#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll x; cin >> x;
    cout << __builtin_popcount(x) << endl;
    return 0;
}