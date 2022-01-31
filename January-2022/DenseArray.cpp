#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    for(int i = 0; i < n-1; i++) {
        int ma = max(a[i], a[i+1]);
        int mi = min(a[i], a[i+1]);
        int z = 0;
        while(ma > 2*mi) {
            mi *= 2;
            z++;
        }
        ans += z;
    }
    cout << ans << "\n";
}


int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}