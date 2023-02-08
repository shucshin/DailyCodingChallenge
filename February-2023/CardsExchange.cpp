#include <iostream>
#include <set>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve(int a, int b) {
    int x, at=0, bt=0;
    set<int> alice, betty;
    rep(i,0,a) {cin >> x; alice.insert(x);}
    rep(i,0,b) {cin >> x; betty.insert(x);}
    for(auto z : alice) {
        if(!betty.count(z)) at++;
    }
    for(auto z : betty) {
        if(!alice.count(z)) bt++;
    }
    cout << min(at, bt) << endl;
}

int main() {
    int a, b;
    while(cin >> a >> b) {
        if(!a && !b) break;
        solve(a, b);
    }
    return 0;
}