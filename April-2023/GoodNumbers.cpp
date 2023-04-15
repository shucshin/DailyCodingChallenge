#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define lb(v,a) lower_bound(v.begin(),v.end(),a)-v.begin()
#define ub(v,a) upper_bound(v.begin(),v.end(),a)-v.begin()

int main() {
    vector<int> v;
    rep(i,0,9) {
        int a = pow(3,i);
        v.pb(a);
        rep(j,0,pow(2,i)) {
            int tmp = a;
            rep(k,0,i) {
                if(j & (1<<k)) {
                    tmp += pow(3,k);
                }
            }
            v.pb(tmp);
            
        }
    } v.pb(pow(3,9));

    int q, n; cin >> q;
    while(q--) {
        cin >> n;
        cout << v[lb(v,n)] << endl;
    }
    return 0;
}