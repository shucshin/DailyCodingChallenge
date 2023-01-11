#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int t; cin >> t;
    rep(i,1,t+1) {
        int n; cin >> n;
        int a, max=0;
        rep(i,0,n) {
            cin >> a;
            max = a > max ? a : max;
        }
        printf("Case %d: %d\n", i, max);
    }
    return 0;
}