class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;

        if(target < nums[i]) return 0;
        if(target > nums[j]) return j+1;

        while(i<=j){
            int mid = i+(j-i)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target){
                if (nums[mid+1] > target) return mid+1;
                else i = mid + 1;
            }
            else {
                if(nums[mid-1] < target) return mid;
                j = mid;
            }
        }
        return i;
    }
};