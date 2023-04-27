#include <iostream>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    int x = a&b;
    cout << (a^x) + (b^x) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}