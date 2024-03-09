class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        bool oneExists = false;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1) oneExists = true;
            else if(nums[i]<=0 || nums[i] > n) nums[i] = 1;
        }
        if(!oneExists) return 1;

        for(int i=0;i<n;i++){
            int index = abs(nums[i]) - 1;
            nums[index] = -abs(nums[index]);
        }

        for(int i=0;i<n;i++){
            if(nums[i] > 0) return i+1;
        }
        return n+1;
    }
};