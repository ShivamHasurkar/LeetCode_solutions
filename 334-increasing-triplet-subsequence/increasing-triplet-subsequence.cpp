class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstSmall = INT_MAX, secondSmall = INT_MAX;

        for(int n : nums){
            if(n<=firstSmall) firstSmall = n;
            else if(n<=secondSmall) secondSmall = n;
            else return true;
        }
        return false;
    }
};