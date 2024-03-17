class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        float maxDia = 0;
        int maxArea = 0;
        for(int i=0;i<dim.size();i++){
            int l = dim[i][0], w = dim[i][1];
            float dia = sqrt(l*l + w*w);
            if(dia >= maxDia){
                if(dia == maxDia)
                    maxArea = max(maxArea, l * w);
                else
                    maxArea = l*w;
                maxDia = dia;
            }
        }
        return maxArea;
    }
};