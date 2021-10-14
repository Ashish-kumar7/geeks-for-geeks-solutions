class Solution {
public:
    bool issafe(vector<vector<int>>&board,int i,int j,int n){
        //top wala 
        for(int top=0;top<i;top++){
            if(board[top][j]==1){
                return 0;
            }
        }
        
        //left daigonal
        
        int x=i;
        int y=j;
        
        while(x>=0 && y>=0){
            if(board[x][y]==1){
                return 0;
            }
            x--;
            y--;
        }
        
        // right daigonal
        
         x=i;
         y=j;
        
        while(x>=0 && y<n){
            if(board[x][y]==1){
                return 0;
            }
            x--;
            y++;
        }
        return 1;
    }

    bool solve(vector<vector<int>>& board ,int n,int i,vector<vector<string>>&ans){
        if(i==n){
            vector<vector<string>> vec( n , vector<string> (n, ".")); 
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(board[i][j]==1){
                        vec[i][j]='Q';
                    }
                    else{
                        vec[i][j]='.';
                    }
                }
            }
            vector<string>temp;
             for(int i=0;i<n;i++){
                 string ss="";
                for(int j=0;j<n;j++){
                    ss+=vec[i][j];
                }
                 temp.push_back(ss);
            }
            ans.push_back(temp);
            return 0;
        }
        for(int k=0;k<n;k++){
            if(issafe(board,i,k,n)){
                board[i][k]=1;
                if(solve(board,n,i+1,ans)){
                    return 1;
                }
                board[i][k]=0;   
            }
        }  
        return 0;
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
       
        vector<vector<int>> board( n , vector<int> (n, 0)); 
        
        vector<vector<string>>ans;
        
        solve(board,n,0,ans);   
        
        return ans;
 
    }
};