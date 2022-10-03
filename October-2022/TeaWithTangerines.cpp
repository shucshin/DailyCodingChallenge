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
    int ans = 0;
    int a1, a;
    cin >> a1;
    a1 = 2*a1-1;
    for(int i = 0; i < n-1; i++) {
        cin >> a;
        int temp = a;
        a /= a1;
        if(temp % a1 == 0) a--;
        ans += a;
    }
    cout << ans << endl;
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