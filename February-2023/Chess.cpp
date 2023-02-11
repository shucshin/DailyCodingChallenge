#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for(int i = a, i < b; i++)

void solve() {
    char c;
    int m, n; 
    cin >> c >> m >> n;
    if(c == 'r') cout << min(m,n) << endl;
    if(c == 'k') {
        if(min(m,n) == 2 && (max(m,n)==2 || max(m,n)==3)) {cout << 4 << endl; return;}
        if(min(m,n) < 3) {cout << max(m,n) << endl; return;}
        (m%2==0) ? printf("%d\n", m/2*n) : printf("%d\n",(m+1)/2*n - n/2);
    }
    if(c == 'Q') (m==2 && n==2) ? printf("1\n") : printf("%d\n",min(m,n));
    if(c == 'K') cout << ((m+1)/2)*((n+1)/2) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}