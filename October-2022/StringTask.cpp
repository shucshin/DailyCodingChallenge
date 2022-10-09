//#include<bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <cstring>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
//#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu__pbds;
using ll = long long; // %lld
using ld = long double; // %0.5lf
using vi = vector<int>;
using vvi = vector<vector<int> >;
using pi = pair<int, int>; // mp(a,b);
using ps = pair<string, string>; // mp(a,b);
using ti = tuple<int, int, int>; // mt(a,b,c);
using ts = tuple<string, string, string>; // mt(a,b,c);
using vll = vector<ll, ll>;
using vvll = vector<vector<ll> >;
using pll = pair<ll, ll>; // mp(a,b);
using tll = tuple<ll, ll, ll>; // mt(a,b,c);
using mll = map<ll, ll>;
using sll = set<ll>;
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
#define f first
#define s second
#define str string
#define sq(a) (a)*(a)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define mt(a,b,c) make_tuple(a,b,c)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fo(a) find_by_order(a)
#define ok(a) order_of_key(a)
// < min to max, > max to min
bool comparePair(pi a, pi b) {return a.f == b.f ? a.s < b.s : a.f < b.f;} //if(a.f == b.f) return a.s < b.s; return a.f < b.f;}
bool compareString(str a, str b) {return a.size() == b.size() ? a < b : a.size() < b.size();} //if(a.size() != b.size()) return a.size() < b.size(); return a < b;}
bool compareTuple(ti a, ti b) {return get<0>(a) == get<0>(b) ? (get<1>(a) == get<1>(b) ? get<2>(a) < get<2>(b) : get<1>(a) < get<1>(b)) : get<0>(a) < get<0>(b);}
// priority_queue > min to max, < max to min
struct comparepq {bool operator() (int a, int b) {return a > b;}};
struct comparepqPair {bool operator() (pi a, pi b) {return a.f == b.f ? a.s > b.s : a.f > b.f;}};
// priority_queue<ti, vector<ti>, comparepqTuple> pq; priority_queue<ts, vector<ts>, comparepqTupleStr> pq;
struct comparepqTuple {bool operator() (ti a, ti b) {return get<0>(a) == get<0>(b) ? (get<1>(a) == get<1>(b) ? get<2>(a) > get<2>(b) : get<1>(a) > get<1>(b)) : get<0>(a) > get<0>(b);}};
struct comparepqTupleStr {bool operator() (ts a, ts b) {return get<0>(a) == get<0>(b) ? (get<1>(a) == get<1>(b) ? get<2>(a) > get<2>(b) : get<1>(a) < get<1>(b)) : get<0>(a) > get<0>(b);}};
// All Subsets (Power Set 2^n)
void subsetsUtil(vi v, vvi& ans, vi subset, int a) {ans.push_back(subset); rep(i,a,v.size()-1) {subset.push_back(v[i]); subsetsUtil(v, ans, subset, i+1); subset.pop_back();} return;}
vvi subsets(vi v) {vi subset; vvi ans; subsetsUtil(v, ans, subset, 0); return ans;}
//for (int i = 0; i < ans.size(); i++) {for (int j = 0; j < ans[i].size(); j++) {cout << ans[i][j] << " ";}cout << endl;}

void solve() {
    str word;
    cin >> word;
    rep(i,0,word.length()) {
        if(tolower(word[i]) == 97 || tolower(word[i]) == 101 || tolower(word[i]) == 105 || 
           tolower(word[i]) == 111 || tolower(word[i]) == 117 || tolower(word[i]) == 121)
            {word.erase(i,1); i--;}
        else word[i] = (char)tolower(word[i]);
    }
    rep(i,0,word.length()) {
        cout << "." << word[i];
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    solve();
    return 0;
}