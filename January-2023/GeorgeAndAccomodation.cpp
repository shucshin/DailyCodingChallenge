#include <iostream>
using namespace std;

int main() {
    int n, a, b; cin >> n;
    int ans = 0;
    while(n--) {
        cin >> a >> b;
        if(b-a >= 2) ans++;
    }
    cout << ans << endl;
    return 0;
}