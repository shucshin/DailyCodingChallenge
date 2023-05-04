#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()

void solve() {
    string s; cin >> s;
    int n = s.length(), half = n/2;
    int a = s[0]-'A', b = s[n-1]-'A';
    if(a==b) {printf("NO\n"); return;}
    vi v(3); v[a] = 1, v[b] = -1;
    (count(all(s),'A'+a) == half) ? v[3^a^b] = -1 : v[3^a^b] = 1;
    int p = 0;
    rep(i,0,n) {
        p += v[s[i]-'A'];
        if(p < 0) {printf("NO\n"); return;}
    }
    p == 0 ? printf("YES\n") : printf("NO\n");
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