#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n, ans = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        ans += 4*i;
    }
    cout << ans << endl;
    return 0;
}