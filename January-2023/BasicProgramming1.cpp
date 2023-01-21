#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define median(a,b,c) max(min(a,b), min(max(a,b),c))

int main() {
    int n, t; cin >> n >> t;
    vll v(n);
    rep(i,0,n) cin >> v[i];
    
    if(t == 1) {
        cout << 7 << endl;
    } else if(t == 2) {
        if(v[0] > v[1]) cout << "Bigger\n";
        else if(v[0] == v[1]) cout << "Equal\n";
        else cout << "Smaller\n";
    } else if(t == 3) {
        cout << median(v[0],v[1],v[2]) << endl;
    } else if(t == 4) {
        rep(j,1,n) v[j] += v[j-1];
        cout << v[n-1] << endl;
    } else if(t == 5) {
        ll even = 0;
        rep(j,0,n) if(v[j]%2==0) even += v[j];
        cout << even << endl;
    } else if(t == 6) {
        string s = "";
        rep(j,0,n) s += (char)(v[j]%26 + 97);
        cout << s << endl;
    } else {
        int index = 0;
        set<int> cycle; cycle.insert(0);
        while(1) {
            index = v[index];
            if(index >= n) {
                cout << "Out\n"; break;
            }
            if(index == n-1) {
                cout << "Done\n"; break;
            }
            if(!cycle.count(index)) {
                cycle.insert(index);
            }
            else {
                cout << "Cyclic\n"; break;
            }
        }
    }
    return 0;
}