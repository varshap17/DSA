#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int n=image.size();
        int m=image[0].size();
        if(sr>=n || sr<0 || sc>=m || sc<0 || image[sr][sc]==newColor)
        {
            return image;
        }
        int oldcolor=image[sr][sc];
        image[sr][sc]=-1;
        if(sr-1>=0 && image[sr-1][sc]==oldcolor)
        {
            floodFill(image,sr-1,sc,newColor);
        }
        if(sr+1<n && image[sr+1][sc]==oldcolor)
        {
            floodFill(image,sr+1,sc,newColor);
        }
        if(sc-1>=0 && image[sr][sc-1]==oldcolor)
        {
            floodFill(image,sr,sc-1,newColor);
        }
        if(sc+1<m && image[sr][sc+1]==oldcolor)
        {
            floodFill(image,sr,sc+1,newColor);
        }
        image[sr][sc]=newColor;
        return image;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends
