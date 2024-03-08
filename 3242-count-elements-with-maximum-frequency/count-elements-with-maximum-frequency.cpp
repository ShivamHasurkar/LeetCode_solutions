class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {0};

        for(int n : nums){
            freq[n]++;
        }
        int maxCount = 0;
        int maxNums = 0;
        for(int i=1;i<=100;i++){
            if(freq[i] > maxCount){
                maxCount = freq[i];
                maxNums = 1;
            }
            else if(freq[i] == maxCount){
                maxNums++;
            }
        }
        return maxNums * maxCount;
    }
};