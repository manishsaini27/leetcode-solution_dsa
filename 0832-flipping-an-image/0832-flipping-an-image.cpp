class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        
        
        for (int i = 0; i < n; i++) {
            reverse(image[i].begin(), image[i].end());
        }
        
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (image[r][c] == 1) {
                    image[r][c] = 0;
                } else {
                    image[r][c] = 1;
                }
            }
        }
        
        return image;
    }
};
