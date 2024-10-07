class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()) return {};
        vector<int> res;
        int n = matrix.size();
        int m = matrix[0].size();

        int top = 0, left=0;
        int bottom = n-1, right = m-1;

        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            ++top;
            for(int j=top;j<=bottom;j++){
                res.push_back(matrix[j][right]);
            }
            --right;
            if(top<=bottom){
                for(int i=right;i>=left;--i){
                    res.push_back(matrix[bottom][i]);
                }
                --bottom;
            }
            if(left<=right){
                for(int j=bottom;j>=top;--j){
                    res.push_back(matrix[j][left]);
                }
                ++left;
            }
        }
        return res;
    }
};