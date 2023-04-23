#include <iostream>
#include <map>
using namespace std;
using pi = pair<int,int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define fst first
#define snd second

int main() {
    int n, m, k, a; cin >> n >> m;
    bool cancel = 0;
    map<int,pi> group;
    rep(i,0,m) {
        cin >> k;
        bool repeated = 0;
        rep(i,0,k) {
            cin >> a;
            if(a >= 0) {
                group[a].fst = 1;
            } else {
                group[abs(a)].snd = 1;
            }
            if(group[abs(a)].fst == 1 && group[abs(a)].snd == 1) repeated = 1;
        }
        if(!repeated) cancel = 1;
        group.clear();
    }
    cancel ? printf("YES\n") : printf("NO\n");
    return 0;
}