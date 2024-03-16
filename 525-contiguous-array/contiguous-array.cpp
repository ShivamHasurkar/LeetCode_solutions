class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> map;
        int zeros = 0, ones = 0, max_len = 0;

        map[0] = -1;

        for(int i=0;i<nums.size();i++){
            nums[i] == 0 ? ++zeros : ++ones;

            int diff = zeros - ones;

            if(map.count(diff)){
                max_len = max(max_len, i-map[diff]);
            }
            else map[diff] = i;
        }
        return max_len;
    }
};