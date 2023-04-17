#include <iostream>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)

const int INF = 1e9;

int main() {
    int n, m; cin >> n >> m;
    ll x, y; cin >> x >> y;
    ll steps = 0;
    ll k, dx, dy; cin >> k;
    rep(i,0,k) {
        cin >> dx >> dy;
        if((x+dx > 0 && x+dx <= n) && (y+dy > 0 && y+dy <= m)) {
            int i = (dx == 0) ? INF : (n-x)/dx;
            int j = (dy == 0) ? INF : (m-y)/dy;
            if(dx < 0) i = (-x+1)/dx;
            if(dy < 0) j = (-y+1)/dy;
            if(i==INF && j==INF) {continue;}
            int k = min(i,j);
            x += k*dx; y += k*dy; steps += k;
        }
    }
    cout << steps << endl;
    return 0;
}