//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define pb(a) push_back(a)
#define rep(i,a,b) for(int i = a; i < b; i++)

ll binarySearch(const vll &v, ll x) {
    ll l = 0, r = v.size()-1; 
    while(r >= l) {
        ll m = (l+r)/2; 
        v[m] < x ? l = m+1 : r = m-1; 
        if(v[m] == x) return m;
    } 
    return -1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ll n, m, a, c, x0, x; cin >> n >> m >> a >> c >> x0;
    // Generar la secuencia x1,...,xn en v
    vll v;
    x = (a*x0 + c)%m; v.pb(x); // x1
    rep(i,1,n) {
        x = (a*x + c)%m;
        v.pb(x);
    }
    
    ll ans = 0;
    // binary search para cada entero
    rep(i,0,n) {
        if(binarySearch(v, v[i]) != -1) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}