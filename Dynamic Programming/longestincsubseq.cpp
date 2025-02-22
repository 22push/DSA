class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        vector<int>dp(n,0);
        dp[0]=1;
        if(n==1){
            return 1;
        }
        int ans =0;
        for(int i=1;i<n;i++){
            int mx=0;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    mx = max(mx,dp[j]+1);
                }
            }
            ans = max(ans ,max(dp[i]+1,mx));
            dp[i]=max(dp[i]+1,mx);
            // cout<<ans<<" ";
        }
        return ans;
    }
};