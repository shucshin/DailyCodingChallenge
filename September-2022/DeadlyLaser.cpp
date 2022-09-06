#include <iostream>
using namespace std;

void solve() {
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    if((sx+d >= n && sx-d <= 1) || (sy+d >= m && sy-d <= 1) 
    || (sx+d >= n && sy+d >= m) || (sx-d <= 1 && sy-d <= 1))
            cout << -1 << endl;
    else
        cout << n + m - 2 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}