class Solution
{
    void dfs(vector<bool>&out,vector<bool>&inp,int start,vector<pair<int,int>>V,vector<int>&path,int & mini){
        if(out[start]==0){
            path.push_back(start);
            return;
        }
        pair<int,int>p=V[start];
        mini=min(mini,p.second);
        dfs(out,inp,p.first,V,path,mini);
    }
    public:
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d){
        vector<pair<int,int>>V(n+1,{-1,-1});
        vector<bool>out(n+1,false);
        vector<bool>inp(n+1,false);
        for(int i=0;i<p;i++){
            out[a[i]]=true;
            inp[b[i]]=true;
            V[a[i]]= {b[i],d[i]};
        }
        vector<vector<int>>ans;
        for(int i=0;i<n+1;i++){
            if(out[i]==true && inp[i]==false){
                vector<int>path;
                int mini=V[i].second;
                path.push_back(i);
                dfs(out,inp,i,V,path,mini);
                path.push_back(mini);
                ans.push_back(path);
            }
        }
        return ans;
    }
};