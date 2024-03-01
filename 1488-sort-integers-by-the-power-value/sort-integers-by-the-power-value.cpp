class Solution {
public:
    int findPower(long long num){
        int count = 0;
        while(num != 1){
            if(num%2 == 0) num /= 2;
            else num = 3 * num + 1;

            count++;
        }
        return count;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> vec;
        unordered_map<int, long long> savedPower;

        for(int i=lo;i<=hi;i++){
            if(!savedPower.contains(i))
                savedPower[i] = findPower(i);
            vec.push_back({i, savedPower[i]});
        }

        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second == b.second ? a.first < b.first : a.second < b.second;
        });
        if(k>vec.size()) return -1;
        return vec[k-1].first;
    }
};