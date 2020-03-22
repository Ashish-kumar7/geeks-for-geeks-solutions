void dfs(int s, vector<int> g[], bool v[])
{
    stack<int>s1;
    s1.push(s);
    cout<<s<<" ";
    v[s]=1;
    while(!s1.empty()){
        int top=s1.top();
        int flag=0;
        for(int i=0;i<g[top].size();i++){
            if(v[g[top][i]]==0){   
                s1.push(g[top][i]);
                v[g[top][i]]=1;
                cout<<g[top][i]<<" ";
                flag=1;
                break;
            }
        }
        if(flag==0){
            s1.pop();
        }
    }
}