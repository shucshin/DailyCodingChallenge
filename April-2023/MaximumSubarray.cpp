#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], sum = 0;
        for(int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            ans = max(ans, sum);
            sum = max(sum,0);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vi v = {-2,1,-3,4,-1,2,1,-5,4}; // [4,-1,2,1]
    cout << sol.maxSubArray(v) << endl;
    return 0;
}