#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int cons = 0, ans = 0;
        rep(i,0,s.length()) {
            (s[i] == 'O') ? cons++ : cons = 0;
            ans += cons;
        }
        cout << ans << endl;
    }
    return 0;
}