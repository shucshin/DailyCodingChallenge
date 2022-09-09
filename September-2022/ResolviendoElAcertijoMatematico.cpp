#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

void solve() {
    ll a, b;
    cin >> a >> b;
    string s;
    s += to_string(a-b);
    s += to_string(a+b);
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}