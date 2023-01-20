#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

const int MAXN = 1e5+1;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        vi v(MAXN*2,0);
        int height = MAXN, ans = 0;
        rep(i,0,s.length()) {
            if(s[i] == '\\') {
                v[height] = i+1;
                height--;
            }
            if(s[i] == '/' && v[++height]) {
                ans += i+1 - v[height];
                v[height] = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}