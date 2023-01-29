#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()

int main() {
    int n; cin >> n;
    vi v(n);
    rep(i,0,n) cin >> v[i];
    sort(all(v));
    rep(i,0,n-1) {
        if(v[i] != v[i+1]) {
            cout << v[i+1] << endl;
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}