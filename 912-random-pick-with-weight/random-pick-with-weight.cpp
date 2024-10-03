class Solution {
public:
    vector<int> prefixSum;
    int totalSum;
    Solution(vector<int>& w) {
        prefixSum.reserve(w.size());
        totalSum = 0;
        for(int weight : w){
            totalSum += weight;
            prefixSum.push_back(totalSum);
        }
    }
    
    int pickIndex() {
        int target = rand() % totalSum +1;
        return lower_bound(prefixSum.begin(), prefixSum.end(), target) - prefixSum.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */