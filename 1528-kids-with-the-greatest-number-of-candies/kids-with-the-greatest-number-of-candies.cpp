class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandy = candies[0];
        for(int candy : candies){
            if(maxCandy < candy) maxCandy = candy;
        }
        for(int candy : candies){
            if(candy + extraCandies >= maxCandy) result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
};