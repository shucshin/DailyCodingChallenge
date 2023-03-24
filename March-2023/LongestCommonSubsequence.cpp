#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length(), m = text2.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1));
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < m+1; j++) {
            !i||!j ? dp[i][j] = 0 : (text1[i-1]==text2[j-1] ? dp[i][j]=dp[i-1][j-1]+1 : dp[i][j]=max(dp[i-1][j],dp[i][j-1]));
        }
    }
    return dp[n][m];
    }
};

int main() {
    Solution sol;
    string text1 = "abcde", text2 = "ace", text3 = "abc", text4 = "def";
    cout << sol.longestCommonSubsequence(text1,text2) << endl;
    cout << sol.longestCommonSubsequence(text3,text3) << endl;
    cout << sol.longestCommonSubsequence(text3,text4) << endl;
    return 0;
}