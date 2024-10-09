class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int cnt=0,n=nums.size();
        for(int i=0;i<n;i++){
            cnt+=(nums[i]==1);
        }
        int cz=0,co=0;
        for(int i=0;i<cnt;i++){
            cz+=(nums[i]==0);co+=(nums[i]==1);
        }
        int ans=INT_MAX;
        ans=min(ans,cz);
        for(int i=cnt;i<n*2;i++){
            cz+=(nums[i%n]==0);
            co+=(nums[i%n]==1);
            cz-=(nums[(i-cnt)%n]==0);
            co-=(nums[(i-cnt)%n]==1);
            ans=min(ans,cz);
        }
        return ans;
    }
};