#include<bits/stdc++.h>
using namespace std;

void utilt(int u,vector<int> adj[],int V,vector<int> &disc,vector<int>&low,vector<bool>&inSt,stack<int> &st)
{
    static int timec=0;
    disc[u]=low[u]=++timec;
    // visit[u]=true;
    st.push(u);
    inSt[u]=true;
    
    for(auto it=adj[u].begin();it!=adj[u].end();it++)
    {
        int v=*it;
        if(disc[v]==-1)
        {
            utilt(v,adj,V,disc,low,inSt,st);
            low[u]=min(low[u],low[v]);
        }else if(inSt[v])
            low[u]=min(low[u],disc[v]);
    }
    
    if(low[u]==disc[u])
    {
        int w=-1;
        while(st.top()!=u)
        {
            cout<<st.top()<<" ";
            inSt[st.top()]=false;
            st.pop();
        }
        cout<<st.top()<<",";
        inSt[st.top()]=false;
        st.pop();
    }
}
void util(vector<int> adj[],int v)
{
    vector<int> low(v,-1),disc(v,-1);
    vector<bool>inSt(v,false);
    stack<int> st;
    
    for(int i=0;i<v;i++)
    {
        if(disc[i]==-1) utilt(i,adj,v,disc,low,inSt,st);
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int v,e;
	    cin>>v>>e;
	    vector<int> adj[v];
	    for(int i=0;i<e;i++)
	    {
	        int u,v;
	        cin>>u>>v;
	        adj[u].push_back(v);
	    }
	    util(adj,v);
	    cout<<"\n";
	}
	return 0;
}