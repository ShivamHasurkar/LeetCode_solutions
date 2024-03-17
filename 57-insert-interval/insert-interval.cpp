class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(res.back()[1] >= intervals[i][0]){
                if(res.back()[1] < intervals[i][1]){
                    res.back()[1] = intervals[i][1];
                } 
            }
            else{
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};