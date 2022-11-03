//#include<bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <cstring>
#include <cmath>
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
using vll = vector<ll>;
using vvll = vector<vector<ll> >;
using pll = pair<ll, ll>; // mp(a,b);
using tll = tuple<ll, ll, ll>; // mt(a,b,c);
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
#define lb(v,a) lower_bound(v.begin(),v.end(),a)-v.begin()
#define ub(v,a) upper_bound(v.begin(),v.end(),a)-v.begin()-1
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
int binarySearch(vi v, int x) {int l = 0, r = v.size()-1; while(r >= l) {int m = (l+r)/2; v[m] < x ? l = m+1 : r = m-1; if(v[m] == x) return m;} return -1;}

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int i = 0, j = height.size()-1;
        while(i < j) {
            int water = (j-i) * min(height[i], height[j]);
            if(water > max) max = water;
            height[i] < height[j] ? i++ : j--;
        }
        return max;
    }
};

void solve() {
    Solution sol;
    vi height1 = {1,8,6,2,5,4,8,3,7}, height2 = {1,1}, height3 = {1,2,4,3};
    cout << sol.maxArea(height1) << endl;
    cout << sol.maxArea(height2) << endl;
    cout << sol.maxArea(height3) << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    solve();
    return 0;
}