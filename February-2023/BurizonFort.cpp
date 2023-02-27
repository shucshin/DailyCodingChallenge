#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()

vll divisors(ll n) {vll d; d.pb(1); d.pb(n); for(ll i=2; i*i<=n; i++) {if(n%i==0) i*i==n ? d.pb(i) : (d.pb(i), d.pb(n/i));} return d;}
bool practicalNum(vll d, ll n) {ll r = 0; bool p; for(auto a : d) {if(r+1 < a) break; r+=a;} (r+1<n*2) ? p=0 : p=1; return p;}

int main() {
    int t; cin >> t;
    while(t--) {
        ll m; cin >> m;
        vll divi = divisors(m);
        sort(all(divi));
        practicalNum(divi,m) ? printf("Yes\n") : printf("No\n");
    }
    return 0;
}