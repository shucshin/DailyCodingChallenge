#include <iostream>
using namespace std;
using ld = long double;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n; cin >> n;
    ld q, y, ans = 0.0;
    rep(i,0,n) {
        cin >> q >> y;
        ans += q*y;
    }
    printf("%0.3Lf\n", ans);
    return 0;
}