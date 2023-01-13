#include <iostream>
#include <vector>
using namespace std;
using vs = vector<string>;
using psi = pair<string, int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)

void solve(int c) {
    string s; int v, max = 0; 
    vs vec;
    rep(i,0,10) {
        cin >> s >> v;
        if(v > max) {
            max = v;
            vec.clear();
            vec.pb(s);
        }
        else if(v == max) vec.pb(s);
        else continue;
    }
    printf("Case #%d:\n", c);
    rep(i,0,vec.size()) {
        cout << vec[i] << endl;
    }
}

int main() {
    int t, c=1; cin >> t;
    while(t--) {
        solve(c); c++;
    }
    return 0;
}