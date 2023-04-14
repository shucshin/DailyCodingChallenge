#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n; cin >> n; // 0, n-1
    vector<int> nums(n); rep(i,0,n) cin >> nums[i];
    ll ans = nums[0], l = 0, r = 0;
    ll sum = 0, mp = -1, yasser = 0;

    for(int i = 0; i < n; ++i) {
        yasser += nums[i];
        sum += nums[i];
        if(sum > ans) {
            ans = sum; l = mp+1; r = i;
        }
        if(sum <= 0) {
            sum = 0; mp = i;
        }
    }
    (l==0 && r==n-1) ? printf("YES\n") : printf("NO\n");
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}