#include <iostream>
using namespace std;

int main() {
    int x; cin >> x;
    int ans = 3000/x;
    if(3000%x != 0) ans++;
    if(ans > 15) ans = 15;
    cout << ans << endl;
    return 0;
}