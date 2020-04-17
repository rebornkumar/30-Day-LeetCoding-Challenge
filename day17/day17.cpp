class Solution {
    
    vector<int> moveX = {0,-1,0,1};
    vector<int> moveY = {1,0,-1,0};
    int R = 0,C = 0;
    bool isValid(int r,int c) {
        if(r >= 0 && c >= 0 && r < R && c < C) {
            return true;
        }
        else {
            return false;
        }
    }
    void dfs(vector<vector<char>>&graph,vector<vector<bool>>&vis,int srcX,int srcY) {
        
        if(vis[srcX][srcY] == true) {
            return;
        }
        vis[srcX][srcY] = true;
        for(int i = 0; i < 4;i++) {
            int X = moveX[i] + srcX;
            int Y = moveY[i] + srcY;
            if(isValid(X,Y) == true && graph[X][Y] == '1' && vis[X][Y] == false) {
                dfs(graph,vis,X,Y);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        R = grid.size();
        if(R == 0) {
            return 0;
        }
        C = grid[0].size();
        int ans = 0;
        vector<vector<bool>>vis(R,vector<bool>(C,false));
        for(int i = 0;i < R;i++) {
            for(int j = 0;j < C;j++) {
                if(grid[i][j] == '1' && vis[i][j] == false) {
                    dfs(grid,vis,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};