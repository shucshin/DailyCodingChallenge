#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int a, b, n; cin >> a >> b >> n;
    int ans = a * 10;
    bool flag = false;
    rep(i,0,10) {
        if((ans+i)%b == 0) {
            ans += i;
            flag = true;
            break;
        }
    }
    if(!flag) {
        cout << -1 << endl;
        return 0;
    }
    string s = to_string(ans);
    rep(i,0,n-1) {
        s += "0";
    }
    cout << s << endl;
    return 0;
}