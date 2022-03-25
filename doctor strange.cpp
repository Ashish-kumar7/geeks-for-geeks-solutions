class Solution{
    public:
    
    void dfs(int s, vector<int>&vis, vector<int>&dis, vector<int>&low,int p,int *ans, int *t,vector<vector<int>>&grf){
        vis[s]=1;
        *t=*t+1;
        dis[s]=low[s]=*t;
        int f=1;
        int c=0;
        for(int i:grf[s]){
            if(vis[i]==0){
                c++;
                dfs(i,vis,dis,low,s,ans,t,grf);
                low[s]=min(low[s],low[i]);
                if(low[i]>=dis[s] && f==1 &&p!=-1){
                    //cout<<s<<endl;
                f=0;
                *ans=*ans+1;
            }
            }
            else if(i!=p){
                low[s]=min(low[s],dis[i]);
            }
        }
        if(c>1 && p==-1){
            //cout<<"x"<<endl;
            *ans=*ans+1;
        }
    }
    
    int doctorStrange(int N, int M, vector<vector<int>> & graph)
    {
         vector<vector<int>>grf(N);
         for(int i=0;i<M;i++){
             grf[graph[i][0]-1].push_back(graph[i][1]-1);
             grf[graph[i][1]-1].push_back(graph[i][0]-1);
         }
         int t=0;
         vector<int>vis(N,0);
         vector<int>dis(N,0);
         vector<int>low(N,0);
         int ans=0;
         dfs(0,vis,dis,low,-1,&ans,&t,grf);
         return ans;
    }
}\