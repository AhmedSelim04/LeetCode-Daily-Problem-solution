class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int, int>f;
        f[0]++;
        int ans = 0, sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            ans += f[sum - goal];
            f[sum]++;
        }
        return ans;
    }
};