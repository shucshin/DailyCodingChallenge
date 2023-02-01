#include <iostream>
using namespace std;

void solve() {
    string s; cin >> s;
    int first = (int)s[0]-'0' + (int)s[1]-'0' + (int)s[2]-'0';
    int second = (int)s[3]-'0' + (int)s[4]-'0' + (int)s[5]-'0';
    first == second ? printf("YES\n") : printf("NO\n");
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}