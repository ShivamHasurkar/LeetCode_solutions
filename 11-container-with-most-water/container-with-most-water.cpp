class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0, water = 0;
        int left = 0, right = height.size()-1;

        while(left < right){
            water = min(height[left], height[right]) * (right - left);
            maxWater = max(maxWater, water);

            if(height[left] > height[right]) right--;
            else left++;
        }

        return maxWater;
    }
};