#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define lb(v,a) lower_bound(v.begin(),v.end(),a)-v.begin()

void solve() {
    int n, s, index, max = 0; cin >> n >> s;
    ll sum = 0; bool change = 1;
    vi v(n); 
    rep(i,0,n) {
        cin >> v[i]; 
        sum += v[i]; 
        if(max < v[i] && change) {max = v[i]; index = i;}
        if(sum > s) change = 0;
    }
    if(s >= sum) {cout << 0 << '\n'; return;}
    cout << index+1 << '\n';
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}