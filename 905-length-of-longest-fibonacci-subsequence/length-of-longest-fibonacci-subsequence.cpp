class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> index;
        for(int i=0;i<n;i++){
            index[arr[i]] = i;
        }
        vector<vector<int>> dp(n, vector<int>(n, 2));
        int maxLength = 0;

        for(int j = 0;j<n;j++){
            for(int i=0;i<j;i++){
                int prev = arr[j] - arr[i];
                if(prev < arr[i] && index.find(prev) != index.end()){
                    int k = index[prev];
                    dp[i][j] = max(dp[i][j], dp[k][i] + 1);
                    maxLength = max(maxLength, dp[i][j]);
                }
            }
        }
        return maxLength >= 3 ? maxLength : 0;
    }
};