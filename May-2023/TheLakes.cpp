//#include<bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <cstring>
#include <cmath>
#include <climits>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <numeric> // iota
//#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu__pbds;
using ll = long long; // %lld
using ld = long double; // %0.5Lf
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using pi = pair<int, int>; // mp(a,b); {a,b};
using ps = pair<string, string>;
using ti = tuple<int, int, int>; // mt(a,b,c); {a,b,c};
using ts = tuple<string, string, string>;
ll gcd(ll a, ll b) {return b ? gcd(b, a % b) : a;}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
#define npos string::npos
#define LSOne(a) ((a) & -(a))
#define sq(a) (a)*(a)
#define sz(a) ((int)(a).size())
#define fst first
#define snd second
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define mt(a,b,c) make_tuple(a,b,c)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fo(a) find_by_order(a)
#define ok(a) order_of_key(a)
#define lb(v,a) lower_bound(v.begin(),v.end(),a)-v.begin()
#define ub(v,a) upper_bound(v.begin(),v.end(),a)-v.begin()-1
#define median(a,b,c) max(min(a,b), min(max(a,b),c))
#define prtfor(a) rep(i,0,a.size()) cout << a[i] << " \n"[i==a.size()-1];
#define prtfore(a) for(auto it=a.begin(); it!=a.end(); ++it) cout << *it << " \n"[it==--a.end()];

// < min to max, > max to min; sort(all(v), comparePair); 
bool comparePair(pi a, pi b) {return a.fst == b.fst ? a.snd > b.snd : a.fst > b.fst;} 
bool compareString(string a, string b) {return a.size() == b.size() ? a > b : a.size() > b.size();} 
bool compareTuple(ti a, ti b) {return get<0>(a) == get<0>(b) ? (get<1>(a) == get<1>(b) ? get<2>(a) > get<2>(b) : get<1>(a) > get<1>(b)) : get<0>(a) > get<0>(b);}
// priority_queue > min to max, < max to min; priority_queue<ti, vector<ti>, comparepqTuple> pq;
struct comparepq {bool operator() (int a, int b) {return a > b;}};
struct comparepqPair {bool operator() (pi a, pi b) {return a.fst == b.fst ? a.snd > b.snd : a.fst > b.fst;}};
struct comparepqTuple {bool operator() (ti a, ti b) {return get<0>(a) == get<0>(b) ? (get<1>(a) == get<1>(b) ? get<2>(a) > get<2>(b) : get<1>(a) > get<1>(b)) : get<0>(a) > get<0>(b);}};

const int MAXN = 1e3;
vector<pi> graph[MAXN][MAXN];
vvi visited(MAXN,vi(MAXN,0));
vvi depth(MAXN,vi(MAXN,0));

void clearGraph(int n, int m) {
    rep(i,0,n) {
        rep(j,0,m) {
            graph[i][j].clear();
            visited[i][j] = 0;
            depth[i][j] = 0;
        }
    }
}

int bfs(pi s) {
    ll ans = 0;
    visited[s.first][s.second] = 1;
    ans += depth[s.fst][s.snd];
    queue<pi> q;
    q.push(s);
    while(!q.empty()) {
        pi u = q.front(); q.pop();
        for(auto v : graph[u.first][u.second]) {
            if(!visited[v.first][v.second]) {
                visited[v.first][v.second] = 1;
                ans += depth[v.fst][v.snd];
                q.push(v);
            }
        }
    }
    return ans;
}

void solve() {
    int n, m, a; cin >> n >> m;
    rep(i,0,n) {
        rep(j,0,m) {
            cin >> a;
            if(!a) continue;
            depth[i][j] = a;
            graph[i][j].pb(mp(i,j));
            // left
            if(j-1>= 0 && depth[i][j-1] != 0) {graph[i][j].pb({i,j-1}); graph[i][j-1].pb({i,j});} 
            // right
            if(j+1<=m-1 && depth[i][j+1] != 0) {graph[i][j].pb({i,j+1}); graph[i][j+1].pb({i,j});} 
            // up
            if(i-1>= 0 && depth[i-1][j] != 0) {graph[i][j].pb({i-1,j}); graph[i-1][j].pb({i,j});}
        }
    }
    ll ans = 0, calc = 0;

    rep(i,0,n) {
        rep(j,0,m) {
            if(depth[i][j] && !visited[i][j]) {
                calc = bfs({i,j});
                ans = max(ans, calc);
            }
        }
    }
    cout << ans << endl;
    clearGraph(n, m);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}