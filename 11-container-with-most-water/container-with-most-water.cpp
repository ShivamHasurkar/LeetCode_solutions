class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0, j=n-1;
        int maxWater = 0;
        while(i<j){
            int currWater = min(height[i], height[j]) * (j-i);
            maxWater = max(currWater, maxWater);
            if(height[i] > height[j]) j--;
            else i++;
        }
        return maxWater;
    }
};