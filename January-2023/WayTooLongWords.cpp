#include <iostream>
using namespace std;

void solve() {
    string s; cin >> s;
    if(s.length() < 11) {
        cout << s << endl;
        return;
    }
    cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}