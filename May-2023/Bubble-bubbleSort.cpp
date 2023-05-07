#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define lb(v,a) lower_bound(v.begin(),v.end(),a)-v.begin()

int main() {
    int n, k; cin >> n >> k;
    vi v(n); rep(i,0,n) cin >> v[i];
    vi res = v;
    sort(all(res));
    int ans = 0;
    
    while(res != v) {
        ans++;
        for(int i = 0; i <= n-k; i++) {
            sort(v.begin()+i,v.begin()+i+k);
        }
    } 

    cout << ans << endl;
    return 0;
}