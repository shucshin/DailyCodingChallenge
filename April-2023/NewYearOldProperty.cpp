#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
string tobinary(ll n) {string s = ""; for(int i = (int)log2(n); i >= 0; i--) {(1&(n>>i)) ? s+="1" : s+="0";} return s;}

int main() {
    ll a, b; cin >> a >> b;
    ll i = (ll)log2(a), j = (ll)log2(b);
    ll first = (i*(i-1))/2, last = (j*(j-1))/2;
    i++; j++;
    ll x = (1LL << i)-1, y = (1LL << j)-1;
    for(ll k = i-2; k >= 0; k--) {
        if((x & ~(1LL << k)) < a) first++;
    } 
    for(ll k = j-2; k >= 0; k--) {
        if((y & ~(1LL << k)) <= b) last++;
    } 
    cout << last-first << endl;
    return 0;
}