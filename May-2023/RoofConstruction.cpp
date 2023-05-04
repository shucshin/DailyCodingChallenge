#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)
string tobinary(ll n) {string s = ""; for(int i = (int)log2(n); i >= 0; i--) {(1&(n>>i)) ? s+="1" : s+="0";} return s;}

void solve() {
    int n; cin >> n; int f = 1;
    while(f < n) {
        if((f << 1) >= n) break;
        f = (f << 1);
    }
    cout << f << " ";
    rep(i,0,n) {
        if(i==1) continue; 
        if(i==f) {cout << "1 "; continue;}
        cout << i << " ";
    } 
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}