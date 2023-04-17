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
#include <numeric> 
using namespace std;
using ll = long long; 
using vi = vector<int>;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define lb(v,a) lower_bound(v.begin(),v.end(),a)-v.begin()

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ll n, m, q; cin >> n >> m;
    vll v(n); rep(i,0,n) cin >> v[i];
    sort(all(v));

    vll prefSum(n); prefSum[0] = v[0];
    rep(i,1,n) {prefSum[i] = prefSum[i-1] + v[i];}

    rep(i,0,m) {
        cin >> q;
        ll j = lb(v,q);
        ll ans=0;
        if(j-1 >= 0) {
            ans += prefSum[j-1];
        }
        ans += (q*(n-j));
        cout << ans << endl;
    }
    return 0;
}