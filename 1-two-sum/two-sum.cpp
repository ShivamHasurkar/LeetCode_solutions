class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> map;

        for(int i=0; i<n;i++){
            map[nums[i]] = i;
        }
        for(int i=0;i<n;i++){
            auto it = map.find(target - nums[i]);
            if(it != map.end() && it->second != i){
                return {i, it->second};
            }
        }
        return {};
    }
};