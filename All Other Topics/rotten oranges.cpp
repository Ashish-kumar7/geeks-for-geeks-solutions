   int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int ans=0,count=0,n=grid.size(),m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)q.push(mp(i,j));
            }
        }
        while(!q.empty()){
                    
                    int size=q.size();
                for(int i=0;i<size;i++)
                {
                    pair<int,int>p=q.front();
                    q.pop();
                    count++;
                    grid[p.first][p.second]=2;
if(p.first-1>=0&&grid[p.first-1][p.second]==1){q.push(mp(p.first-1,p.second));
                        grid[p.first-1][p.second]=2;
}
if(p.first+1<n&&grid[p.first+1][p.second]==1){q.push(mp(p.first+1,p.second));
                        grid[p.first+1][p.second]=2;

}
if(p.second-1>=0&&grid[p.first][p.second-1]==1){q.push(mp(p.first,p.second-1));
                        grid[p.first][p.second-1]=2;

}
if(p.second+1<m&&grid[p.first][p.second+1]==1){q.push(mp(p.first,p.second+1));
                        grid[p.first][p.second+1]=2;

}
                }
                if(!q.empty())
               ans++;             
        }
        for(int i=0;i<n;i++){for(int j=0;j<m;j++){
                if(grid[i][j]==1)return -1;
            }
        }
        return ans;
    }