#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
#define rep(i,a,b) for(int i = a; i < b; i++)
string tobinary(ll n) {string s = ""; for(int i = (int)log2(n); i >= 0; i--) {(1&(n>>i)) ? s+="1" : s+="0";} return s;}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    string s; cin >> s;
    int n = (int)log10(stoi(s));
    ll ans = 0;
    rep(i,1,n+1) {
        ans += pow(2,i);
    }
    string bit = "";
    rep(i,0,s.length()) {
        if(s[i] == '4') bit += "0";
        if(s[i] == '7') bit += "1";
    }
    int bin = stoi(bit,0,2)+1;
    cout << ans+bin << endl;
    return 0;
}