class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n!=1){
            int x = n;
            int sum = 0;
            while(x){
                int digit = x%10;
                sum += digit*digit;
                x = x/10;
            }
            if(!s.insert(sum).second) return false;
            n = sum;
        }
        return true;
    }
};