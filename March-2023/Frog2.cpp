#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)
const int INF = 1e9;

int main() {
    int n, k; cin >> n >> k; vll h(n);
    rep(i,0,n) cin >> h[i];
    vll dp(n,INF); dp[0] = 0;
    rep(i,0,n) {
        rep(j,i+1,k+i+1) { // from i+1 to i+k
            if(j<n) dp[j] = min(dp[j], dp[i] + abs(h[i]-h[j]));
            /**
             * h = 10 30 40 50 20
             * k = 3
             * when i = 0, j is 1~4
             * dp[0] = 0
             * dp[1] = 20
             * dp[2] = min(INF, dp[0] + abs(10-40))
            */
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}