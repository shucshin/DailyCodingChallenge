//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int n, m, a; cin >> n >> m;
    int diffs = 0;
    vi v(n);
    rep(i,0,m) {
        cin >> a; a--;
        if(v[a]++ == 0) diffs++;
        if(diffs == n) {
            cout << 1;
            rep(i,0,n) {
                if(--v[i] == 0) diffs--;
            }
        } else cout << 0;
    } cout << endl;
    return 0;
}