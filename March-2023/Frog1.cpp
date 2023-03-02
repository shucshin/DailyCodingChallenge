#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)
const int INF = 1e9;

int main() {
    int n; cin >> n; vll h(n);
    rep(i,0,n) cin >> h[i];
    vll dp(n); dp[0] = 0; dp[1] = abs(h[1]-h[0]);
    rep(i,2,n) {
        /**
         * h = 10 30 40 20
         * dp = 0 20 then
         * dp[2] = check if it's better to 10->30->40 or 10->40
         * dp[3] = check if it's better to 30->40->20 or 30->20
         * dp[i] is the best step until i-th
        */
        dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout << dp[n-1] << endl;
    return 0;
}