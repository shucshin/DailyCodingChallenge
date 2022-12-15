#include <iostream>
#include <vector>
#include <map>
using namespace std;
using vi = vector<int>;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> m;
        int ans=0, sum=0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            if(sum == k) ans++;
            if(m.find(sum-k) != m.end())
                ans += m[sum-k];
            m[sum]++;
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    Solution sol;
    vi nums1 = {1,1,1}, nums2 = {1,2,3}, nums3 = {1,-1,1,1,1,1}, nums4 = {3,4,7,2,-3,1,4,2};
    cout << sol.subarraySum(nums1, 2) << endl;
    cout << sol.subarraySum(nums2, 3) << endl;
    cout << sol.subarraySum(nums3, 3) << endl;
    cout << sol.subarraySum(nums4, 7) << endl;
    return 0;
}