#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()

int main() {
    int n; cin >> n;
    while(n--) {
        vi v(3);
        rep(i,0,3) cin >> v[i];
        sort(all(v));
        if(v[0]+v[1] <= v[2]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}