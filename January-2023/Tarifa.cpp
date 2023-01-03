#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int x, n; cin >> x >> n;
    int p, ans = x+x*n;
    rep(i,0,n) {
        cin >> p;
        ans -= p;
    }
    cout << ans << endl;
    return 0;
}