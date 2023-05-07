#include <iostream>
#include <set>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb push_back


int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    set<char> left, right;
    left = {'q','w','e','r','t','a','s','d','f','g','z','x','c','v','b'};
    right = {'y','u','i','o','p','h','j','k','l','n','m'};
    string s; cin >> s;
    vector<int> v;
    rep(i,0,s.length()) {
        if(left.count(s[i])) v.pb(0);
        else v.pb(1);
    }
    bool can = true;
    int a = v[0], b = v[1];
    if(a == b) can = false;
    rep(i,2,s.length()) {
        if(i%2 == 0) {
            if(a != v[i]) {can = false; break;}
        }
        else {
            if(b != v[i]) {can = false; break;}
        }
    }

    can ? printf("yes\n") : printf("no\n");

    return 0;
}