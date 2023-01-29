#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve(int c) {
    string s, t; cin >> s >> t;
    int one=0, zero=0, question=0;
    int oneS=0, oneT=0;
    rep(i,0,s.length()) {
        if(s[i]=='1') oneS++;
        if(t[i]=='1') oneT++;
        if(s[i]=='?') {question++; continue;}
        if(s[i]!=t[i]) {
            (int)s[i]-'0' ? one++ : zero++;
        }
    }
    if(oneS > oneT) {printf("Case %d: -1\n", c); return;}
    int ans = question + one + (zero-one > 0 ? (zero-one) : 0);
    printf("Case %d: %d\n", c, ans);
}

int main() {
    int c; cin >> c;
    rep(i,1,c+1) solve(i);
    return 0;
}