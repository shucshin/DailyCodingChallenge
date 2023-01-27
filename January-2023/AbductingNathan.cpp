#include <iostream>
using namespace std;

void solve() {
    int k, t, n; cin >> k >> t >> n;
    int turns = (n+t)/k;
    turns%2==0 ? printf("Thiago\n") : printf("Nathan\n");
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}