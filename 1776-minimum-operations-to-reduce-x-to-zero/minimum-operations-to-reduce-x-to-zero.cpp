class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int target = totalSum - x;
        if(target < 0) return -1;
        if(target == 0) return nums.size();

        int left = 0;
        int sum = 0;
        int maxLen = 0;
        for(int right = 0;right<nums.size();right++){
            sum += nums[right];
            while(sum>target){
                sum -= nums[left];
                left++;
            }
            if(sum == target){
                maxLen = max(maxLen, right-left+1);
            }
        }
        return maxLen == 0 ? -1 : nums.size() - maxLen;
    }
};