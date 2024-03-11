class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> map;
        for(int c : s){
            map[c]++;
        }
        string ans = "";

        for(char c : order){
            if(map.contains(c)){
                ans.append(map[c], c);
                map.erase(c);
            }
        }
        for(auto it : map){
            ans.append(it.second, it.first);
        }

        return ans;
    }
};