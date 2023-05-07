#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb push_back

const ll INF = (318 * 1e9);

bool local(ll a, ll b, ll c) {
    if(a <= b && c <= b) return true;
    if(a >= b && c >= b) return true;
    return false;
}

bool maxLocal(ll a, ll b, ll c) {
    if(a <= b && c <= b) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ll n; cin >> n;
    ll a, b, c;
    vll moun; 
    cin >> a >> b;
    if(a <= b) moun.pb(a);
    ll chk = b;
    rep(i,2,n) {
        cin >> c;
        if(c == chk) continue;
        if(local(a, b, c)) {
            if(moun.empty()) moun.pb(b);
            else if(moun.back() != b) moun.pb(b);
        }
        a = b, b = c; chk = c;
    }
    if(c <= a) moun.pb(c);

    ll ans = 0;
    a = moun[0], b = moun[1];
    rep(i,2,moun.size()) {
        c = moun[i];
        if(maxLocal(a,b,c)) {
            ans = max(ans,min(b-a,b-c));
        }
        a = b, b = c;
    }

    cout << ans << endl;
    return 0;
}