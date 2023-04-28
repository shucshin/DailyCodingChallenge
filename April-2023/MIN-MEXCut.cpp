#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    string s; cin >> s;
    bool io = 1;
    int zeros = 0;
    rep(i,0,s.length()) {
        if(s[i] == '0' && io) {zeros++; io = 0;}
        if(s[i] == '1') io = 1;
    }
    cout << min(zeros,2) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}