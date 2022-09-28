#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

void solve() {
    int k, n, ni;
    cin >> k >> n;
    int csort[k+1];
    memset(csort, 0, sizeof(csort));
    for(int i = 0; i < n; i++) {
        cin >> ni;
        csort[ni]++;
    }
    int ans = 0;
    for(int i = 0; i <= k; i++) {
        ans += csort[i] * csort[i];
    }
    priority_queue<int> pq;
    for(int i = 0; i <= k; i++) {
        if(csort[i] > 0)
            pq.push(csort[i]);
    }
    int a, b, c;
    while(pq.size() > 2) {
        a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        c = pq.top(); pq.pop();
        a--; b--; c--;
        ans += 7;
        if(a > 0)
            pq.push(a);
        if(b > 0)
            pq.push(b);
        if(c > 0)
            pq.push(c);
    }
    cout << ans << endl;
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