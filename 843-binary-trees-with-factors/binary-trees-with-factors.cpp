class Solution {
public:
    const int MOD = 1e9 + 7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        unordered_map<int, long> dp;
        for(int i=0;i<n;++i){
            dp[arr[i]] = 1;
            for(int j=0;j<i;++j){
                if(arr[i] % arr[j] == 0){
                    int right = arr[i] / arr[j];
                    if(dp.find(right) != dp.end()){
                        dp[arr[i]] = (dp[arr[i]] + dp[arr[j]] * dp[right]) % MOD;
                    }
                }
            }
        }
        long ans = 0;
        for(auto& [_, count] : dp){
            ans = (ans + count) % MOD;
        }
        return (int)ans;
    }
};