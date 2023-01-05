// 11547
#include <iostream>
using namespace std;

int main() {
    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        string s = to_string((((n*567)/9 + 7492)*235)/47 - 498);
        cout << s[s.length()-2] << endl;
    }
    return 0;
}