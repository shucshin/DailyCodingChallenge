#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll m = (ll)max(a,b);
    m = (ll)max(m,c);
    ll aa = m-a+1;
    ll bb = m-b+1;
    ll cc = m-c+1;
    if(m==a && m!=b && m!=c)
        aa--;
    if(m!=a && m==b && m!=c)
        bb--;
    if(m!=a && m!=b && m==c)
        cc--;
    printf("%lld %lld %lld\n", aa,bb,cc);
}

int main()
{
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}