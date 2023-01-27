#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb(a) push_back(a)
#define rep(i,a,b) for(int i = a; i < b; i++)
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}

int main() {
    int n, a, b, ans = 0; cin >> n;
    vi v;
    cin >> a; v.pb(a);
    rep(i,0,n-1) {
        cin >> b;
        if(gcd(a,b) != 1) {
            ans++;
            v.pb(1);
        }
        v.pb(b);
        a = b;
    }
    cout << ans << endl;
    for(auto x : v) {
        cout << x << " ";
    } cout << endl;
    return 0;
}