#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)

vll primes(ll n) {vll p(n+1,1), q; p[0]=0; p[1]=0; for(ll i=2; i*i<=n; i++) {if(p[i]) {for(ll j=i*i; j<=n; j+=i) p[j]=0;}} rep(i,0,n+1) {if(p[i]) q.pb(i);}return q;}
vll prime, dp(212,-1);

ll solve(int c, int n) {
    ll &ans = dp[prime[c]];
    if(prime[c]==2) return ans = 1;
    if(ans != -1) return ans;
    ans = 0;
    for(int i = c-1; i>=0; i--) {
        if(prime[c]-prime[i] <= 14) ans += solve(i,n);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, c=-1; cin >> n;
    prime = primes(n);
    rep(i,0,n+1) {if(prime[i]) c++;}
    solve(c,n);
    cout << dp[n] << endl;
    return 0;
}