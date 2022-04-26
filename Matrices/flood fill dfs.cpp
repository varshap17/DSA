class Solution {
public:
    int target = 0;
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size()) 
            return; 
        if(image[sr][sc] == newColor || image[sr][sc] != target) 
            return;     
        if(image[sr][sc] == target)
            image[sr][sc] = newColor;               
        
        dfs(image, sr+1, sc, newColor);
        dfs(image, sr-1, sc, newColor);
        dfs(image, sr, sc+1, newColor);
        dfs(image, sr, sc-1, newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)     {
        target = image[sr][sc];
        if(target != newColor) 
            dfs(image, sr, sc, newColor);
        return image;   
    }
};


