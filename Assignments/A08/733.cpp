class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int pcolor,
             int color) {
        if (i >= 0 && i < image.size() && j >= 0 && j < image[0].size() &&
            image[i][j] == pcolor) {

        image[i][j] = color;
        dfs(image, i + 1, j, pcolor, color);
        dfs(image, i - 1, j, pcolor, color);
        dfs(image, i, j - 1, pcolor, color);
        dfs(image, i, j + 1, pcolor, color);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
        int pcolor = image[sr][sc];
        if(pcolor != color){
            dfs(image, sr, sc, pcolor, color);
        }
        return image;
    }
};
