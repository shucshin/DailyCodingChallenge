#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    while(cin >> n >> a >> b) {
        int ans = 1;
        while(1) {
            a++; b++;
            a >>= 1, b >>= 1;
            //cout << "a: " << a << " b: " << b << endl;
            if(a == b) break;
            else ans++;
        }
        cout << ans << endl;
    }
    return 0;
}