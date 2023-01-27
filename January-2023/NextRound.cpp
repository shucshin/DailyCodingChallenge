#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, k; cin >> n >> k;
    vi v(n);
    rep(i,0,n) cin >> v[i];
    int ans = 0, score = v[k-1];
    rep(i,0,n) {
        if(v[i] > 0 && v[i] >= score) ans++;
    }
    cout << ans << endl;
    return 0;
}