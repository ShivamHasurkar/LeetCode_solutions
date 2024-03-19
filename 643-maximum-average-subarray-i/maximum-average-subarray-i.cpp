class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        int maxSum = sum;
        int i=0, j=k;
        while(j<nums.size()){
            sum = sum + nums[j] - nums[i];
            maxSum = max(sum, maxSum);
            cout<<maxSum<<endl;
            j++;
            i++;
        }
        return (double) maxSum / k;
    }
};