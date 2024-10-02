class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int high = nums[0]; 
        int low = nums[0];

        for(int i=1;i<nums.size();i++){
            high = max(high, nums[i]);
            low = min(low, nums[i]);
        }

        return max(0, high-low-2*k);
    }
};