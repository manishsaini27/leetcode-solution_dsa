class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int minr =0;
        int minc=0;
        int maxr = m-1;
        int maxc = n-1;
        int tne = m*n;
        int count = 0;
        vector<int>v;

        while(minr<=maxr && minc<=maxc){
            //rigth
            for(int j=minc; j<=maxc && count<tne ;j++){
                v.push_back(matrix[minr][j]);
                count++;
            }
            minr++;

            //down
            for(int i= minr; i<=maxr && count<tne ;i++) {
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            //left
            for(int j=maxc; j>=minc && count<tne;j--) {
                v.push_back(matrix[maxr][j]);
                count++;
            }
            maxr--;
        
            //up
            for(int i=maxr ;i>=minr&& count<tne ;i--){
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
            
        }
        return v;
    }
};