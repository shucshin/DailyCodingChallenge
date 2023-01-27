#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define rall(a) (a).rbegin(), (a).rend()

int main() {
    int n; cin >> n;
    vi v(n);
        rep(i,0,n) cin >> v[i];
    sort(rall(v));

    ll nodes = 1, mul = 1;
    rep(i,0,n) {
        mul *= v[i];
        nodes += mul;
    }
    cout << nodes << endl;
    return 0;
}