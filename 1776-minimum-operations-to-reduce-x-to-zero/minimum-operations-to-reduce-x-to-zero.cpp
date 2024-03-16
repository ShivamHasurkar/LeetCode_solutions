class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int target = totalSum - x;
        if(target < 0) return -1;

        int maxLength = -1;
        int sum = 0;
        int left = 0;
        for(int right =0;right<nums.size();right++){
            sum += nums[right];
            while(sum > target && left<=right){
                sum -= nums[left++];
            }
            if(sum == target){
                maxLength = max(maxLength, right - left + 1);
            }
        }
        return (maxLength == -1) ? -1 : nums.size() - maxLength;
    }
};