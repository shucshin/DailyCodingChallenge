#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long; // %lld
using ld = long double; // %0.5lf

void solve() {
    int n;
    cin >> n;
    cout << n/3-2 << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}