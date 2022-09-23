#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
using ll = long long; // %lld
using vl = vector<tuple<long long, long long> >; //

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vl vec;
    ll l, r, max = 0;
    for(int i = 0; i < n; i++) {
        cin >> l >> r;
        if(max < l) 
            max = l;
        tuple<long long, long long> t = make_tuple(l, r);
        vec.push_back(t);
    }
    ll ans = 0;
    for(int i = 0; i < vec.size(); i++) {
        if(get<1>(vec[i]) >= max) 
            ans++;
    }
    cout << ans << endl;
    return 0;
}