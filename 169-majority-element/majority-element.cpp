class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = INT_MIN;
        int count = 0;

        for(int i : nums){
            if(count == 0) {
                candidate = i; 
                count++;
            }
            else {
                if(candidate == i)count++;
                else count--;
            }
        }
        return candidate;
    }
};