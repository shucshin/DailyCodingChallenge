#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;
using pld = pair<ld, ld>;
using vpld = vector<pld>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ll n; cin >> n;
    if(n > 30) {
        cout << (ld)100/3 << " " << (ld)200/3 << endl;
        return 0;
    }
    vpld v(n+1);
    rep(i,1,n+1) {
        if(i == 1) {v[1] = {100.00,0.00}; continue;}
        if(i == 2) {v[2] = {0.00,100.00}; continue;}
        v[i] = {(v[i-1].first + v[i-2].first)/2,(v[i-1].second + v[i-2].second)/2};
    }
    printf("%0.6Lf %0.6Lf\n", v[n].first, v[n].second);
    return 0;
}