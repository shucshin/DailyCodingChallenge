#include <iostream>
#include <sstream>
#include <string>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve(int t) {
    string s, w; cin >> s;
    stringstream ss(s);
    int egypt, ghana;
    getline(ss, w, ':'); egypt = stoi(w);
    getline(ss, w, ':'); ghana = stoi(w);
    // 1. in ghana, 2. in egypt 
    // 1st match egypt 1:6 ghana wins
    if(egypt+1 > ghana+6) printf("Case %d: YES\n",t);
    else if(egypt+1 < ghana+6) printf("Case %d: NO\n",t);
    else {
        int eG = ghana*2 + 6, eE = egypt + 2;
        if(eG < eE) printf("Case %d: YES\n",t);
        else if(eG > eE) printf("Case %d: NO\n",t);
        else printf("Case %d: PENALTIES\n",t);
    }
}

int main() {
    freopen("ghanophobia.in", "r", stdin);
    int t; cin >> t;
    rep(i,1,t+1) solve(i);
    return 0;
}