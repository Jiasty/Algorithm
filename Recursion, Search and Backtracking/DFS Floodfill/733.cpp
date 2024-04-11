class Solution 
{
    //向量数组
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    int m = 0, n = 0;
    int prev; //原始像素值
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        if(image[sr][sc] == color) return image; //特殊情况

        m = image.size(), n = image[0].size();
        prev = image[sr][sc];
        dfs(image, sr, sc, color);
        return image;    
    }

    void dfs(vector<vector<int>>& image, int i, int j, int color)
    {
        image[i][j] = color;
        
        for(int k = 0; k < 4; k++)
        {
            int x = i + dx[k], y = j + dy[k];
            if(x >= 0 && x < m && y >= 0 && y < n && image[x][y] == prev)
            {
                dfs(image, x, y, color);
            }
        }
    }
};