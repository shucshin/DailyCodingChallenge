#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int n; string s; cin >> n >> s;
    int ans = 0, coffee = 0;
    rep(i,0,n) {
        if(s[i] == '1') {
            coffee = 2;
            ans++;
        } 
        else {
            if(coffee) {ans++; coffee--;}
        }
    }
    cout << ans << endl;
    return 0;
}