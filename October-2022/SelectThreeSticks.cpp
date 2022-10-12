#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long; // %lld
using ld = long double; // %0.5lf
using vi = vector<int>;

void solve() {
    int n, a;
    cin >> n;
    vi v;
    for(int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<int>());
    
    int m = INT_MAX;
    for(int i = 0; i < n-2; i++) {
        int temp = abs((v[i]-v[i+1]) + (v[i+1]-v[i+2]));
        if(m > temp) m = temp;
    }
    cout << m << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}