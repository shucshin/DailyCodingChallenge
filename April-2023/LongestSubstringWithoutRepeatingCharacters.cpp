#include <iostream>
#include <set>
#include <cmath>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> alphabet;
        int ans = 0, l = 0;
        for(int i = 0; i < s.length(); i++) {
            while(alphabet.count(s[i])) {
                alphabet.erase(s[l]); l++;
            }
            alphabet.insert(s[i]);
            ans = max(ans, i-l+1);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    cout << sol.lengthOfLongestSubstring("tmmzuxt") << endl;
    cout << sol.lengthOfLongestSubstring(" ") << endl;
    cout << sol.lengthOfLongestSubstring("abcabcbb") << endl;
    return 0;
}