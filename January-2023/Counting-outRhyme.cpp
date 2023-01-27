#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define pb(a) push_back(a)
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, k, a, z = 0; cin >> n >> k;
    vi v;
    rep(i,1,n+1) v.pb(i);
    rep(i,0,k) {
        cin >> a;
        z = (z+a)%n;
        n--;
        cout << v[z] << " ";
        v.erase(v.begin()+z, v.begin()+z+1);
    } cout << endl;
    return 0;
}