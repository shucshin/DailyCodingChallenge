#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int ans = 0, cur = 0;
        rep(i,0,nums.size()) {
            cur += nums[i];
            if(cur == k) ans++;
            if(m.count(cur-k)) ans += m[cur-k];
            m[cur]++;
        } return ans;
    }
};

int main() {
    Solution sol;
    vi v = {1,1,1,1,1,1,1,1,1};
    cout << sol.subarraySum(v,2) << endl;
    return 0;
}