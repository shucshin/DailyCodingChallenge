#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n, ans = 0; cin >> n;
    string s, t; cin >> s >> t;
    bool oneone = 0, zerozero = 0;
    bool one = 0, zero = 0;
    rep(i,0,n) {
        if(s[i]=='1' || t[i]=='1') one = 1;
        if(s[i]=='0' || t[i]=='0') zero = 1;
        if(one && zero) {
            ans += 2; oneone = 0; zerozero = 0;
        }
        if(one && !zero) {
            oneone = 1;
            if(zerozero) {
                ans++;
                zerozero = 0; oneone = 0;
            }
        }
        if(!one && zero) {
            ans++; zerozero = 1;
            if(oneone) {
                ans++;
                zerozero = 0; oneone = 0;
            } 
        }
        one = 0; zero = 0;
    }
    /**
     * 100  101  001  011
     * 100  101  001  011
     * 
     * if oneone == 1 and 00, ans += 2; and oneone = 0, zerozero = 0;
     * if zerozero == 1 and 00, ans++;
     * if zerozero == 1 ans 11, ans+=2; 
     *
    */
    cout << ans << endl;
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