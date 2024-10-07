class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int n : nums){
            map[n]++;
        }
        vector<pair<int,int>> vec(map.begin(), map.end());
        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b){
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        } 
        return ans;
    }
};