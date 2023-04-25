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

const int MOD = 1e9+7;
const int INF = 1e9; // 10^9 = 1B is < 2^31-1
const ll LLINF = 4e18; // 4*10^18 is < 2^63-1
const double EPS = 1e-9; // 10^-9

int digits(ll n) {return int(log10(n)+1);}
bool isnumber(string a) {rep(i,0,a.length()) {if(!isdigit(a[i])) return false;}return true;}
string tobinary(ll n) {string s = ""; for(int i = (int)log2(n); i >= 0; i--) {(1&(n>>i)) ? s+="1" : s+="0";} return s;}
string palindrome(string s) {unordered_map<char,int> m; rep(i,0,s.length()) m[s[i]]++; int odd=0; char c; for(auto a : m) {if(a.second%2!=0) {odd++; c=a.first;}} if(odd>1 || odd&&s.length()%2==0) return "Null"; string x="", y=""; for(auto a : m) {string s(a.second/2,a.first); x=x+s; y=s+y;} return (odd) ? (x+c+y) : (x+y);}
ll nCk(ll n, ll k) {ld r = 1; rep(i,1,k+1) r = r * (n-k+i)/i; return (ll)(r+0.01);}
ll binpow(ll a, ll b) {ll r = 1; while(b) {if(b & 1ll) r = r * a; a = a * a; b >>= 1ll;} return r;}
vll factorials(ll n) {vll f(n+1,1); rep(i,1,n+1) f[i] = f[i-1]*i%MOD; return f;}
vll primes(ll n) {vll p(n+1,1), q; p[0]=0; p[1]=0; for(ll i=2; i*i<=n; i++) {if(p[i]) {for(ll j=i*i; j<=n; j+=i) p[j]=0;}} rep(i,0,n+1) {if(p[i]) q.pb(i);}return q;}
vll divisors(ll n) {vll d; d.pb(1); d.pb(n); for(ll i=2; i*i<=n; i++) {if(n%i==0) i*i==n ? d.pb(i) : (d.pb(i), d.pb(n/i));} return d;}
bool practicalNum(vll &d, ll n) {ll r = 0; bool p; for(auto a : d) {if(r+1 < a) break; r+=a;} (r+1<n*2) ? p=0 : p=1; return p;}
int binarySearch(vi &v, int x) {int l = 0, r = v.size()-1; while(r >= l) {int m = (l+r)/2; v[m] < x ? l = m+1 : r = m-1; if(v[m] == x) return m;} return -1;}
int ternarySearch(vi &v, int x) {int l = 0, r = v.size()-1; while(r >= l) {int m1 = l+(r-l)/3, m2 = r-(r-l)/3; if(v[m1] > x) r = m1-1; else if(v[m2] < x) l = m2+1; else {l = m1+1; r = m2-1;} if(v[m1] == x) return m1; if(v[m2] == x) return m2;} return -1;}
tuple<ll,int,int> maxSubarray(vi &v) {int n = v.size(), l=0, r=0; ll ans = v[0], sum = 0, mp = -1; rep(i,0,n) {sum += v[i]; if(sum > ans) {ans = sum; l = mp+1; r = i;} if(sum <= 0) {sum = 0; mp = i;}} return {ans, l, r};}
tuple<ll,int,int> minSubarray(vi &v) {int n = v.size(), l=0, r=0; ll ans = v[0], sum = 0, mp = -1; rep(i,0,n) {sum += v[i]; if(sum < ans) {ans = sum; l = mp+1; r = i;} if(sum >= 0) {sum = 0; mp = i;}} return {ans, l, r};}
// All Subsets (Power Set 2^n)
void subsetsUtil(vi v, vvi& ans, vi subset, int a) {ans.push_back(subset); rep(i,a,v.size()-1) {subset.push_back(v[i]); subsetsUtil(v, ans, subset, i+1); subset.pop_back();} return;}
vvi subsets(vi v) {vi subset; vvi ans; subsetsUtil(v, ans, subset, 0); return ans;}
vvi threeSum(vi &v, int n) {sort(all(v)); vvi ans; rep(i,0,v.size()-2) {if(i > 0 && v[i-1] == v[i]) continue; int k = -v[i]+n, a = i+1, b = v.size()-1; while(a < b) {if(v[a] + v[b] == k) {ans.push_back({v[i], v[a], v[b]}); a++, b--; while(a < b && v[a] == v[a-1]) a++; while(a < b && v[b] == v[b+1]) b--;} if(v[a] + v[b] > k) b--; if(v[a] + v[b] < k) a++;}} return ans;}
// Segment Tree :: vll a(n), segtree(4*n); v=1, tl=0, tr=n-1;
void buildST(vll &a, vll &t, int v, int tl, int tr) {if(tl==tr) t[v] = a[tl]; else {int m = (tl+tr)/2; buildST(a,t,v*2,tl,m); buildST(a,t,v*2+1,m+1,tr); t[v] = t[v*2]+t[v*2+1];}}
void updateST(vll &t, int v, int tl, int tr, int pos, ll x) {if(tl==tr) t[v]=x; else {int m = (tl+tr)/2; (pos<=m) ? updateST(t,v*2,tl,m,pos,x) : updateST(t,v*2+1,m+1,tr,pos,x); t[v]=t[v*2]+t[v*2+1];}}
ll rsqST(vll &t, int v, int tl, int tr, int l , int r) {if(tl>r || tr<l) return 0; if(l<=tl && r>=tr) return t[v]; int m = (tl+tr)/2; return rsqST(t,v*2,tl,m,l,r) + rsqST(t,v*2+1,m+1,tr,l,r);}

vvi sparse_table(vi &v) {int n = v.size(), k = (int)log2(n)+1; vvi st(n,vi(k)); rep(i,0,n) st[i][0] = v[i]; rep(j,1,k+1) {for(int i=0; i+(1<<j)<=n; i++) {
/*RMQ < Min, > Max*/ st[i][j-1] > st[i+(1<<(j-1))][j-1] ? st[i][j]=st[i][j-1] : st[i][j]=st[i+(1<<(j-1))][j-1];
/*RSQ*/ //st[i][j] = st[i][j-1] + st[i+(1<<(j-1))][j-1];
}} return st;}
// Minimum <=, Maximum >=
int RMQ(int l, int r, vvi &st) {int m, j = (int)log2(r-l+1); st[l][j] >= st[r-(1<<j)+1][j] ? m=st[l][j] : m=st[r-(1<<j)+1][j]; return m;}
ll RSQ(int l, int r, vvi &st) {ll ans = 0; int k = (int)log2(st.size())+1; for(int j=k; j>=0; j--) {if(l+(1<<j)-1 <= r) {ans += st[l][j]; l += 1<<j;}} return ans;}

/** ==Notes==
 * M_PI - pi
 * 9e1 = 90, 1e9 = 1,000,000,000
 * # of bits of n :: (int)log2(n);
 * char to int :: c-'0';
 * char to string :: string s(1,c);
 * Turn on and off :: bool io = 0; io ^= 1;
 * Check if bit is on (i--) :: 1 & (n >> i);
 * When nothing left, cursor next line :: cin.ignore();
 * memset(memo, -1, sizeof(memo)); // init DP memo table. Alternative :: vi memo(n, -1);
 * memset(arr, 0, sizeof(arr)); // clear array of ints
*/

void solve() {
    int n; cin >> n;
    vll v(n);
    rep(i,0,n) cin >> v[i];
    sort(all(v));
    ll one = v[0]*v[1];
    ll two = v[n-1]*v[n-2];
    ll ans = max(one,two);
    cout << ans << endl;
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