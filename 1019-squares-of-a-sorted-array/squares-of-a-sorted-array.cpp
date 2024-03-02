class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int i=0, j=nums.size()-1;
        while(i<j){
            if(abs(nums[i]) > abs(nums[j])){
                res.insert(res.begin(), nums[i] * nums[i]);
                i++;
            }
            else {
                res.insert(res.begin(), nums[j] * nums[j]);
                j--;
            }
        }
        res.insert(res.begin(), nums[i] * nums[i]);
        return res;
    }
};