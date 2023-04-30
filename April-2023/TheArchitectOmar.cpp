#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    int n; cin >> n;
    int l=0, k=0, b=0;
    string s;
    rep(i,0,n) {
        cin >> s;
        if(s.substr(0,3) == "bed") b++;
        if(s.substr(0,7) == "kitchen") k++;
        if(s.substr(0,6) == "living") l++;
    }
    cout << min(b/2,min(l,k)) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}