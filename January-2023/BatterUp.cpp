#include <iostream>
using namespace std;
using ld = long double;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, b; cin >> n;
    int a = n;
    ld ans = 0;
    rep(i,0,n) {
        cin >> b;
        b == -1 ? a-- : ans += b;
    }
    printf("%.3Lf\n", ans/a);
    return 0;
}