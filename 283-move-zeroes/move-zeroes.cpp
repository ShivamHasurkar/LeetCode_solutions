class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroIdx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0) {
                nums[zeroIdx] = nums[i];
                zeroIdx++;
            }
        }
        for(int k=zeroIdx;k<nums.size();k++){
            nums[k] = 0;
        }
    }
};