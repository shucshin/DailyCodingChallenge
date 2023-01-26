#include <iostream>
#include <vector>
#include <cstring>
#include <set>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)

const int MAXN = 1e6+1;
vector<bool> prime(MAXN, true);
set<ll> tprime;

int main() {
    for(ll p = 2; p <= MAXN; p++) {
        if(prime[p]) {
            tprime.insert(p*p);
            for(ll i = p*p; i <= MAXN; i+=p)
                prime[i] = false;
        }
    }
    /*
    for(auto a : tprime) {
        cout << a << " ";
    } cout << endl;
    */
    int n; cin >> n;
    ll x;
    rep(i,0,n) {
        cin >> x;
        tprime.count(x) ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}