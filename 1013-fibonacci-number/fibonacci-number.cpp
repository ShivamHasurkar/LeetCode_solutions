class Solution {
public:
    int dp(int n, vector<int>& memo){
        if(n<=1) return n;
        if(memo[n] != -1) return memo[n];

        memo[n] = dp(n-1, memo) + dp(n-2, memo);
        return memo[n];
    }
    //top-down approach
    int fib(int n) {
        vector<int> memo(n+1, -1);
        return dp(n, memo);    
    }
};