class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size()-2; i++){
            int j = i+1, k = nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k] == 0){
                    result.push_back({nums[i], nums[j], nums[k]});
                    int temp1 = j, temp2 = k;
                    while(j<k && nums[j] == nums[temp1]) j++;
                    while(j<k && nums[k] == nums[temp2]) k--; 
                }
                else if (nums[i]+nums[j]+nums[k] < 0){
                    j++;
                }
                else k--;
            }
            while(i+1 < nums.size()-1 && nums[i] == nums[i+1]) i++;
        }
        return result;
    }
};