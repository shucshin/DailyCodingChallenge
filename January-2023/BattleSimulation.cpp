#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    string s, combo, ans=""; cin >> s;
    rep(i,0,s.length()) {
        if(i+2 < s.length()) {
            combo = s.substr(i,3);
            if(combo == "RBL" || combo == "RLB" || combo == "BRL" || 
            combo == "BLR" || combo == "LRB" || combo == "LBR") {
                ans += "C";
                i+=2; continue;
            }
        }
        if(s[i] == 'R') ans += "S";
        if(s[i] == 'B') ans += "K";
        if(s[i] == 'L') ans += "H";
    }
    cout << ans << endl;
    return 0;
}