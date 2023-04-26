#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int n; cin >> n;
    int bits = log2(n);
    cout << ((1 << bits)-1) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}