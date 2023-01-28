#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve(int t) {
    int n, a; cin >> n;
    int mile=0, juice=0;
    rep(i,0,n) {
        cin >> a;
        mile += ((a/30) + 1);
        juice += ((a/60) + 1);
        // mile += ((a/30) + (a%30-1 ? 1 : 0));
        // juice += ((a/60) + (a%60-1 ? 1 : 0));
    }
    mile *= 10;
    juice *= 15;
    printf("Case %d: %s %d\n", t, (mile == juice ? "Mile Juice" : (mile < juice ? "Mile" : "Juice")), min(mile,juice));
}

int main() {
    // Mile 30 secs for 10 cents
    // Juice 60 secs for 15 cents
    int t; cin >> t;
    rep(i,1,t+1) solve(i);
    return 0;
}