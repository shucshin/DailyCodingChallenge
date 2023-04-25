#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)

// 2 -> 2 (2 x 1)

// 4 -> 6 (3 x 2)
// 5 -> 9 (3 x 3)
// 6 -> 12 (4 x 3)
// 7 -> 16 (4 x 4)
// 8 -> 20 (5 x 4) seq/2 * (seq/2)+1

/**
 * 1 1 1 0 0 1 1
 * 1 0 1 1 0 1
 * 1 1 0 1 1 0
 * 0 1 1 0 1 1
 * 
*/

void solve() {
    string s; cin >> s;
    ll n = s.length();
    ll seq = 0, c = 0;
    rep(i,0,n) {
        if(s[i] == '1') c++;
        else {seq = max(seq, c); c = 0;}
    }
    seq = max(seq, c);
    if(seq != n && s[n-1] == '1') {
        int i = 0;
        while(s[i] == '1') {
            c++; i++;
        }
    }
    seq = max(seq, c);

    if(seq == n) {
        cout << (ll)(n*n) << endl; return;
    }

    if(seq%2) { // impar
        seq = pow((seq+1)/2,2);
    } else { // par
        seq = (seq/2) * ((seq/2)+1);
    }
    cout << seq << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}