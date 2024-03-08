class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {0};
        int maxCount = 0;
        for(int n : nums){
            freq[n]++;
            maxCount = max(maxCount, freq[n]);
        }
        int maxNums = 0;
        for(int i=1;i<=100;i++){
            if(freq[i] == maxCount){
                maxNums++;
            }
        }
        return maxNums * maxCount;
    }
};