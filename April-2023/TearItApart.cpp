#include <iostream>
#include <cmath>
#include <map>
#include <set>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define fst first
#define snd second

void solve() {
    string s; cin >> s;
    set<char> alpha;
    rep(i,0,s.length()) {alpha.insert(s[i]);}
    
    int ans = 1e9;
    for(auto a : alpha) {
        int tmp = 0, cur = 0;
        rep(i,0,s.length()) {
            if(s[i] == a) {
                tmp = max(tmp,cur);
                cur = 0;
            }
            else cur++;
        }
        tmp = max(tmp,cur);
        ans = min(ans,tmp);
    }
    
    if(ans <= 1) {
        !ans ? printf("0\n") : printf("1\n");
        return;
    }
    cout << (int)log2(ans)+1 << endl;
}        

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}