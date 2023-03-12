#include <iostream>
#include <map>
using namespace std;
using ti = tuple<int, int, int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    map<string, ti> m;
    int n, k, z; cin >> n;
    string i, j;
    rep(a,0,n) {
        cin >> i >> j >> k;
        j == "any" ? get<0>(m[i])+=k : (j == "left" ? get<1>(m[i])+=k : get<2>(m[i])+=k);
    }
    long long ans = 0;
    bool onlyAny = false;
    bool possible = false;
    for(auto a : m) {
        int any = get<0>(a.second), left = get<1>(a.second), right = get<2>(a.second);
        if((any && left) || (any && right) || (left && right) || (any > 1)) possible = 1;
        if(any && !left && !right) onlyAny = 1;
    }
    bool can = false;
    for(auto a : m) {
        ans += max(get<1>(a.second),get<2>(a.second)); // 
        if(get<0>(a.second) && !get<1>(a.second) && !get<2>(a.second)) {
            ans += 1; // only any in that one
        }
    }
    ans++;
    possible ? printf("%lld\n",ans) : printf("impossible\n");
    return 0;
}