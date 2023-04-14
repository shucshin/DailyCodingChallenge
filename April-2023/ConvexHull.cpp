#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
using ld = long double;
using vi = vector<int>;
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define rep(i,a,b) for(int i = a; i < b; i++)
struct pt{ld x, y;};

bool operator<(const pt &p, const pt &q) {return mp(p.y, p.x) < mp(q.y, q.x);}

// Direction :: collinear 0, clockwise -1, counterclockwise 1;
int orientation(pt p, pt q, pt r) {
    ld val = (r.y-p.y)*(q.x-p.x)-(q.y-p.y)*(r.x-p.x);
    return !val ? 0 : (val < 0 ? -1 : 1);
}

vector<pt> grahamScan(vector<pt> &pts) {
    pt p0 = *min_element(all(pts), [](pt p, pt q) {return mp(p.y, p.x) < mp(q.y, q.x);});
    sort(all(pts), [&p0](const pt &p, const pt &q) {
        int o = orientation(p0,p,q);
        if(!o) return (p0.x-p.x)*(p0.x-p.x)+(p0.y-p.y)*(p0.y-p.y) < (p0.x-q.x)*(p0.x-q.x)+(p0.y-q.y)*(p0.y-q.y);
        return o > 0; // o < 0 for cw
    });
    vector<pt> ch;
    rep(i,0,pts.size()) {
        while(ch.size() > 1 && orientation(ch[ch.size()-2], ch.back(), pts[i]) != 1 /* -1 for cw */) ch.pop_back();
        ch.pb(pts[i]);
    }
    return ch;
}

int main() {
    int n, x, y; 
    while(cin >> n) {
        if(!n) break;
        set<pt> tmp;
        vector<pt> pts;
        rep(i,0,n) {
            cin >> x >> y;
            pt p; p.x = x; p.y = y;
            tmp.insert(p);
        }
        for(auto a : tmp) pts.pb(a);

        vector<pt> ans = grahamScan(pts);
        cout << ans.size() << endl;
        for(auto a : ans) {
            cout << a.x << " " << a.y << endl;
        }
    }
    return 0;
}