class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       
        int minr = 0;
        int maxr= n-1;
        int minc= 0;
        int maxc = n-1;
        int num = 1;
        vector<vector<int>>matrix(n,vector<int>(n));

        while(minr <= maxr && minc <= maxc){
            for(int j=minc;j<=maxc;j++) {
                
                matrix[minr][j] = num++;
                
            }
            minr++;

            for(int i=minr; i<=maxr; i++) {
                
                matrix[i][maxc]= num++;
            }

            maxc--;

            for(int j=maxc; j>=minc;j--){
                
                matrix[maxr][j] = num++;
                
            }
            maxr--;
            for(int i=maxr;i>=minr;i--){
                
                matrix[i][minc]= num++;
                
            }
            minc++;
        }

        return matrix;


    }
};