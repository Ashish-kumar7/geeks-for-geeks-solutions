// https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    int isSafe(int m, int n, int x, int y){
        if(x<m && y<n && x>=0 && y>=0)
            return 1;
        return 0;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        queue<pair<int, int> > q1;
        queue<pair<int, int> > q2;
        
        vector<vector<int> > vis(m, vector<int>(n, 0));
        
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == 2){
                    q1.push(make_pair(i, j));
                    vis[i][j] = 1;
                }
            }
        }
        
        int time = 0;
        int flag = 0;
        while(!q1.empty() || !q2.empty()){
            flag = 1;
            
            if(q1.size() > 0)
                time++;
            
            while(!q1.empty()){
                int x = q1.front().first;
                int y = q1.front().second;
                q1.pop();
                
                if(isSafe(m, n, x+1, y) == 1 && grid[x+1][y] == 1 && vis[x+1][y] == 0){
                    q2.push(make_pair(x+1, y));
                    vis[x+1][y] = 1;
                }
                if(isSafe(m, n, x, y+1) == 1 && grid[x][y+1] == 1 && vis[x][y+1] == 0){
                    q2.push(make_pair(x, y+1));
                    vis[x][y+1] = 1;
                }
                if(isSafe(m, n, x-1, y) == 1 && grid[x-1][y] == 1 && vis[x-1][y] == 0){
                    q2.push(make_pair(x-1, y));
                    vis[x-1][y] = 1;
                }
                if(isSafe(m, n, x, y-1) == 1 && grid[x][y-1] == 1 && vis[x][y-1] == 0){
                    q2.push(make_pair(x, y-1));
                    vis[x][y-1] = 1;
                }
            }
            
            if(q2.size() > 0)
                time++;
            while(!q2.empty()){
                int x = q2.front().first;
                int y = q2.front().second;
                q2.pop();
                
                if(isSafe(m, n, x+1, y) == 1 && grid[x+1][y] == 1 && vis[x+1][y] == 0){
                    q1.push(make_pair(x+1, y));
                    vis[x+1][y] = 1;
                }
                if(isSafe(m, n, x, y+1) == 1 && grid[x][y+1] == 1 && vis[x][y+1] == 0){
                    q1.push(make_pair(x, y+1));
                    vis[x][y+1] = 1;
                }
                if(isSafe(m, n, x-1, y) == 1 && grid[x-1][y] == 1 && vis[x-1][y] == 0){
                    q1.push(make_pair(x-1, y));
                    vis[x-1][y] = 1;
                }
                if(isSafe(m, n, x, y-1) == 1 && grid[x][y-1] == 1 && vis[x][y-1] == 0){
                    q1.push(make_pair(x, y-1));
                    vis[x][y-1] = 1;
                }
                    
            }
        }
        
        if(flag == 1)
            time--;
        
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(vis[i][j]==0 && grid[i][j] == 1){
                    time = -1;
                }
            }
        }
        
        return time;
    }
};
