class Solution {
public:
    vector<vector<int>> rotateMatrix(vector<vector<int>>& mat){
        int n = mat.size();
        vector<vector<int>> rotated(n , vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rotated[j][n-1 - i] = mat[i][j];
            }
        }
        return rotated;
    }
    bool equalMatrix(vector<vector<int>>& mat, vector<vector<int>>& target){
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(mat[i][j] != target[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++){
            if(equalMatrix(mat, target)) return true;
            
            mat = rotateMatrix(mat);
        }
        return false;
    }
};