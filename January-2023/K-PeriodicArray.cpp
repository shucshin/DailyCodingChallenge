#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, k; cin >> n >> k;
    int ans = 0;
    vi v(n);
    rep(i,0,n) cin >> v[i];
    
    rep(i,0,k) {
        int one=0, two=0;
        for(int j = i; j < n; j+=k) {
            if(v[j] == 1) one++;
            if(v[j] == 2) two++;
        }
        ans += min(one,two);
    }
    cout << ans << endl;
    return 0;
}