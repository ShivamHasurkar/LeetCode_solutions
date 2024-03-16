class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxPos = 0;
        for(int i=0; i<nums.size() && i<=maxPos; ++i){
            maxPos = max(maxPos, nums[i] + i);
        }
        return maxPos >= nums.size() - 1;
    }
};