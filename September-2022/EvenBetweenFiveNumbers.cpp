#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    for(int i = 0; i < 5; i++) {
        cin >> n;
        if(abs(n)%2 == 0) ans += 1;
    }
    cout << ans << " valores pares" << endl;
    return 0;
}