class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int maxStore = 0;
        while(i<j){
            int currStore = (j-i) * min(height[i], height[j]);
            maxStore = max(maxStore,currStore);

            if(height[i] < height[j]) i++;
            else j--;
        }
        return maxStore;
    }
};