#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb push_back

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int n, a, b; cin >> n >> a;
    vi v;
    int c = 1;
    rep(i,1,n) {
        cin >> b;
        if(a != b) {
            v.pb(c); c = 1;
            a = b;
        } else c++;
    } v.pb(c);
    int ans = 0;
    rep(i,1,v.size()) {
        ans = max(ans,min(v[i],v[i-1]));
    }
    cout << ans*2 << endl;
    return 0;
}