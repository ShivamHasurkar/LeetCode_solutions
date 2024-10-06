class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](const int &a, const int &b){
            string sa = to_string(a);
            string sb = to_string(b);

            if((sa + sb) > (sb + sa)){
                return true;
            }
            return false;
        });
        if(nums[0] == 0) return "0";

        string ans = "";
        for(int n : nums){
            ans += to_string(n);
        }
        return ans;
    }
};