class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;

        if(target < nums[left]) return 0;
        if(target > nums[right]) return right+1;

        while(left<=right){
            int mid = left + (right-left) /2;

            if(nums[mid] == target) return mid;
            else if (nums[mid] < target){
                if(nums[mid+1] > target) return mid + 1;
                else left = mid + 1;
            }
            else {
                if(nums[mid - 1] < target) return mid;
                right = mid;
            }
        }
        return left;
    }
};