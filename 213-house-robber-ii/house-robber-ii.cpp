class Solution {
public:
    int dp(vector<int>& nums){
        int n = nums.size();
        vector<int> dp(n);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i=2;i<n;i++){
            dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);

        vector<int> v1(nums.begin()+1, nums.end());
        vector<int> v2(nums.begin(), nums.end()-1);

        return max(dp(v1), dp(v2));
    }
};