#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int t,l,w,h; cin >> t;
    rep(i,0,t) {
        cin >> l >> w >> h;
        if(l > 20 || w > 20 || h > 20) printf("Case %d: bad\n", i+1);
        else printf("Case %d: good\n", i+1);
    }
    return 0;
}