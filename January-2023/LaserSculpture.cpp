#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int a, c, x;
    while(cin >> a) {
        if(!a) break;
        int ans = 0, cur = a;
        cin >> c;
        rep(i,0,c) {
            cin >> x;
            if(cur > x) ans += (cur-x);
            cur = x;
        }
        cout << ans << endl;
    }
    return 0;
}