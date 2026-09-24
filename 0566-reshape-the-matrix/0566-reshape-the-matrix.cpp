class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if(m*n != r*c) {
            return mat;
        }
        vector<vector<int>>ans(r,vector<int>(c));
        int oldcol = 0;
        int oldrow = 0;
        for(int i = 0; i<r; i++) {
            for(int j=0; j <c; j++) {
                ans[i][j] = mat[oldrow][oldcol];

                oldcol++;

            if(oldcol == n){
                oldcol =0;
                oldrow++;
                }
            }
        }
        return ans;
    }
};