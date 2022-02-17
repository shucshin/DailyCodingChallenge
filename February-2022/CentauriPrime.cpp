#include <iostream>
#include <string>
using namespace std;
using ll = long long;

void solve(ll c) {
    string s;
    cin >> s;
    char e = s.back();
    if(e == 'y' || e == 'Y')
        printf("Case #%lld: %s is ruled by nobody.\n", c, s.c_str());
    else if(e=='a' || e=='e' || e=='i' || e=='o' || e=='u' ||
            e=='A' || e=='E' || e=='I' || e=='O' || e=='U')
        printf("Case #%lld: %s is ruled by Alice.\n", c, s.c_str());
    else
        printf("Case #%lld: %s is ruled by Bob.\n", c, s.c_str());
}

int main() {
    ll t, c=1;
    cin >> t;
    while(t--) {
        solve(c);
        c++;
    }
}