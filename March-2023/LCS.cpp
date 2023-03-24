#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
#define all(a) (a).begin(), (a).end()
#define rep(i,a,b) for(int i = a; i < b; i++)

// Longest Common Subsequence
string LCS(string s, string t) {
    int n = s.length(), m = t.length();
    vvi dp(n+1,vi(m+1));
    rep(i,0,n+1) {
        rep(j,0,m+1) {
            !i||!j ? dp[i][j] = 0 : (s[i-1]==t[j-1] ? dp[i][j]=dp[i-1][j-1]+1 : dp[i][j]=max(dp[i-1][j],dp[i][j-1]));
        }
    }
    int i = n, j = m, k = dp[n][m]; vector<char> c(k+1); c[k] = '\0';
    while(i && j) {
        s[i-1]==t[j-1] ? (c[k-1] = s[i-1], i--, j--, k--) : (dp[i-1][j]>dp[i][j-1] ? i-- : j--);
    }
    string lcs(all(c)); lcs.erase(lcs.length()-1,1);
    return lcs;
} 

int main() {
    string s,t; cin >> s >> t;
    cout << LCS(s,t) << endl;
    return 0;
}