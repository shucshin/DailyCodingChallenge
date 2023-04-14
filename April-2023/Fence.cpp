#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int t, a, b, c; cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        cout << max(a,max(b,c)) << endl;
    }
    return 0;
}