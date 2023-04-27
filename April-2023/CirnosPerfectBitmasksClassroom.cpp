#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
#define LSOne(a) ((a) & -(a))

void solve() {
    int x; cin >> x;
    int a = LSOne(x);
    while(!(x & a) || !(x ^ a)) a++;
    cout << a << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}