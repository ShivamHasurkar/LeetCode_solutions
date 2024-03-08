class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum = 0;
        int occur = 0;

        for(int i=0;i<n;i++){
            occur = ceil(((float) (n-i) * (i+1)) / 2);
            sum += arr[i] * occur;
        }
        return sum;
    }
};
