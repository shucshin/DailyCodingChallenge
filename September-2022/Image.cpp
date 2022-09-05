#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    string s = s1+s2;
    sort(s.begin(), s.end());
    int ans = 0;
    for(int i = 0; i < s.length()-1; i++) {
        if(s[i] != s[i+1])
            ans++;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}