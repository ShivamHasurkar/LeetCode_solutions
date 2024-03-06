class Solution {
public:
    int solvedp(vector<int>& nums, int target, vector<int>& dp){
        if(target == 0) return 1;
        else if(target < 0) return 0;

        if(dp[target] != -1) return dp[target];

        int count = 0;
        for(int x : nums){
            count += solvedp(nums, target - x, dp);
        }
        return dp[target] = count;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1, -1);
        return solvedp(nums, target, dp);
    }
};